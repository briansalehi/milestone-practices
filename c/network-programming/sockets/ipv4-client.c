#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void throw_exception(const char *msg)
{
	printf("%s\n", msg);
	exit(1);
}

int prepare_connection(const char *ip, const in_port_t port)
{
	struct sockaddr_in address;
	memset(&address, 0, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_port = htons(port);

	if (inet_pton(AF_INET, ip, &address.sin_addr.s_addr) <= 0)
		throw_exception("failed to create address");

	int server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (server < 0)
		throw_exception("failed to create socket");

	if (connect(server, (struct sockaddr *) &address, sizeof(address)) < 0) {
		close(server);
		throw_exception("failed to connect to server");
	}

	printf("connected: %s:[%d]\n", ip, port);

	return server;
}

void echo_service(const int server, const char *message)
{
	ssize_t sent = send(server, message, strlen(message), 0);
	if (sent <= 0) {
		close(server);
		throw_exception("failed to send data to server");
	}

	printf("sent %ld bytes: %s\n", sent, message);

	char buffer[sent+1];
	ssize_t received = recv(server, buffer, sent, 0);
	if (received != sent) {
		close(server);
		throw_exception("failed to received data properly");
	}

	buffer[received] = '\0';
	if (strncmp(message, buffer, strlen(message)) == 0)
		printf("incoming data matched\n");
	else
		printf("data signature don't match\n");

	close(server);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		throw_exception("required parameters: <ip address> <port> <message>");

	const char *ip = argv[1];
	const in_port_t port = atoi(argv[2]);
	const char *message = argv[3];

	int server = prepare_connection(ip, port);
	echo_service(server, message);

	return 0;
}
