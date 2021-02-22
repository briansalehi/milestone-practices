#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void throw_exception(const char *msg)
{
	printf("%s\n", msg);
	exit(1);
}

int setup_connection(const in_port_t local_port)
{
	/* prepare server connection */
	int local_socket = socket(AF_INET6, SOCK_STREAM, IPPROTO_TCP);
	if (local_socket < 0)
		throw_exception("failed to create server socket");

	/* fill up server address structure */
	struct sockaddr_in6 local_address;
	local_address.sin6_family = AF_INET6;
	local_address.sin6_port = htons(local_port);

	if (inet_pton(AF_INET6, "::1", &local_address.sin6_addr.s6_addr) <= 0)
		throw_exception("failed to translate address");

	/* open port and bind to it */
	if (bind(local_socket, (struct sockaddr *) &local_address, sizeof(local_address)) < 0) {
		close(local_socket);
		throw_exception("failed to bind to port");
	}

	/* initialize connection */
	if (listen(local_socket, 100) < 0) {
		close(local_socket);
		throw_exception("failed to listen to the port");
	}

	printf("server running: ");
	char ip_string[INET6_ADDRSTRLEN+1];
	const char *ret = inet_ntop(AF_INET6, &local_address.sin6_addr.s6_addr, ip_string, sizeof(ip_string));
	if (ret == NULL)
		printf("translation failed\n");
	else
		printf("%s:[%d]\n", ip_string, ntohs(local_address.sin6_port));

	return local_socket;
}

int accept_client(const int local_socket)
{
	/* this section should be in a forever loop */
	struct sockaddr_in6 client_address;
	socklen_t client_socklen = sizeof(client_address);
	memset(&client_address, 0, client_socklen);

	/* wait for client to connect */
	char client_ip[INET6_ADDRSTRLEN];
	memset(client_ip, 0, sizeof(client_ip));
	int client_socket = accept(local_socket, (struct sockaddr *) &client_address, &client_socklen);
	if (client_socket < 0) {
		close(local_socket);
		throw_exception("failed to create client socket");
	}

	/* translate client ip */
	if (inet_ntop(AF_INET6, &client_address.sin6_addr.s6_addr, client_ip, sizeof(client_ip)) == NULL) {
		close(local_socket);
		close(client_socket);
		throw_exception("failed to translate client address");
	}
	in_port_t client_port = ntohs(client_address.sin6_port);
	printf("new connection from: %s:%d\n", client_ip, client_port);

	return client_socket;
}

void echo_service(const int client_socket)
{
	/* retreive client data */
	size_t message_size = 1000;
	char buffer[message_size+1];
	memset(buffer, 0, sizeof(buffer));
	ssize_t received = recv(client_socket, buffer, message_size, 0);
	if (received <= 0) {
		close(client_socket);
		throw_exception("failed to retreive data from client");
	}
	buffer[received] = '\0';
	printf("received %ld bytes: %s\n", received, buffer);

	/* echo back the message to client */
	ssize_t transferred = send(client_socket, buffer, received, 0);
	if (transferred <= 0) {
		close(client_socket);
		throw_exception("failed to echo back data to client");
	} else if (transferred != received) {
		close(client_socket);
		throw_exception("data not completely sent to client");
	} else {
		printf("sent %ld bytes: %s\n", transferred, buffer);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		throw_exception("required parameters: <port>");

	/* required data to initialize server */
	in_port_t local_port = atoi(argv[1]);

	int local_socket = setup_connection(local_port);
	int client_socket = accept_client(local_socket);
	echo_service(client_socket);

	close(client_socket);
	close(local_socket);
	return 0;
}
