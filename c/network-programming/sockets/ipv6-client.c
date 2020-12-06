#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

void throw_exception(const char *msg)
{
	printf("%s\n", msg);
	exit(1);
}

int setup_connection(const char *ip, const in_port_t port)
{
	struct sockaddr_in6 server_address;
	memset(&server_address, 0, sizeof(server_address));
	server_address.sin6_family = AF_INET6;
	server_address.sin6_port = htons(port);

	if (inet_pton(AF_INET6, ip, &server_address.sin6_addr.s6_addr) <= 0)
		throw_exception("address translation failed");

	int server = socket(AF_INET6, SOCK_STREAM, IPPROTO_TCP);
	if (server < 0)
		throw_exception("failed to create socket");

	if (connect(server, (struct sockaddr *) &server_address, sizeof(server_address)) < 0) {
		close(server);
		throw_exception("failed to connect to server");
	} else {
		printf("connected to %s:[%d]\n", ip, port);
	}

	return server;
}

void echo_service(const int server, const char *message)
{
	ssize_t sent = send(server, message, strlen(message), 0);
	if (sent <= 0)
		throw_exception("failed to send data properly");
	else
		printf("sent %ld bytes: %s\n", sent, message);

	char buffer[sent+1];
	ssize_t received = recv(server, buffer, sizeof(buffer), 0);
	if (received != sent)
		throw_exception("failed to receive data properly");

	buffer[received] = '\0';
	printf("received %ld bytes: %s\n", received, buffer);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		throw_exception("required parameters: <ip> <port> <message>");

	const char *ip = argv[1];
	const in_port_t port = atoi(argv[2]);
	const char *message = argv[3];

	int server = setup_connection(ip, port);
	echo_service(server, message);

	close(server);
	return 0;
}
