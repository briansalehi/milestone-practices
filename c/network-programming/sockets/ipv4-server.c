#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

/* exception handler */
void throw_exception(const char *msg)
{
	printf("%s\n", msg);
	exit(1);
}

/* connects client to the server */
int prepare_connection(const in_port_t port)
{
	struct sockaddr_in address;
	memset(&address, 0, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = htonl(INADDR_ANY);
	address.sin_port = htons(port);

	int connection = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (connection < 0)
		throw_exception("failed to create socket");

	if (bind(connection, (struct sockaddr *) &address, sizeof(address)) < 0) {
		close(connection);
		throw_exception("failed to bind to port");
	}

	if (listen(connection, 10) < 0) {
		close(connection);
		throw_exception("failed to listen to socket");
	}

	printf("listening: ");

	char local_address[INET_ADDRSTRLEN];
	if (inet_ntop(AF_INET, &address.sin_addr.s_addr, local_address, sizeof(local_address)) != NULL)
		printf("%s:[%d]\n", local_address, port);
	else
		printf("translation failed\n");

	return connection;
}

int accept_client(const int connection)
{
	struct sockaddr_in client_address;
	socklen_t client_addrlen = sizeof(client_address);
	memset(&client_address, 0, client_addrlen);

	int client = accept(connection, (struct sockaddr *) &client_address, &client_addrlen);
	if (client < 0)
		throw_exception("failed to accept client");

	printf("client connected: ");

	char client_ip[INET_ADDRSTRLEN];
	in_port_t client_port = ntohs(client_address.sin_port);
	if (inet_ntop(AF_INET, &client_address.sin_addr, client_ip, sizeof(client_ip)) != NULL)
		printf("%s:[%d]\n", client_ip, client_port);
	else
		printf("translation failed\n");

	return client;
}

void echo_service(const int client)
{
	size_t buflen = 1024;
	char buffer[buflen+1];
	ssize_t received = recv(client, buffer, buflen, 0);
	if (received <= 0)
		throw_exception("failed to retrieve data from client");

	buffer[buflen] = '\0';
	printf("received %ld bytes: %s\n", received, buffer);

	ssize_t sent = send(client, buffer, received, 0);
	if (sent != received)
		throw_exception("failed to send data properly");

	printf("sent %ld bytes back\n", sent);
	close(client);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		throw_exception("required parameters: <port>");

	const in_port_t port = atoi(argv[1]);

	int connection = prepare_connection(port);
	int client = accept_client(connection);
	echo_service(client);

	close(connection);
	return 0;
}
