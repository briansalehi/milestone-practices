#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

void throw_exception(const char *msg)
{
	printf("%s\n", msg);
	exit(1);
}

void print_address(const struct sockaddr *address)
{
	if (address == NULL) {
		printf("empty\n");
		return;
	}

	void *numeric_ip;
	char string_ip[INET6_ADDRSTRLEN];
	in_port_t port;

	switch (address->sa_family) {
	case AF_INET:
		numeric_ip = &((struct sockaddr_in *) address)->sin_addr;
		port = ntohs(((struct sockaddr_in *) address)->sin_port);
		break;
	case AF_INET6:
		numeric_ip = &((struct sockaddr_in6 *) address)->sin6_addr;
		port = ntohs(((struct sockaddr_in6 *) address)->sin6_port);
		break;
	default:
		printf("unknown\n");
		return;
	}

	if (inet_ntop(address->sa_family, &numeric_ip, string_ip, sizeof(string_ip)) == NULL) {
		printf("untracable\n");
		return;
	}

	printf("%s:[%d]\n", string_ip, port);
}

int setup_connection(const char *address, const char *service)
{
	if (address == NULL || service == NULL)
		throw_exception("address or service empty");

	struct addrinfo filter;
	memset(&filter, 0, sizeof(filter));
	filter.ai_family = AF_UNSPEC;
	filter.ai_socktype = SOCK_STREAM;
	filter.ai_protocol = IPPROTO_TCP;

	struct addrinfo *list;
	int err = getaddrinfo(address, service, &filter, &list);
	if (err != 0)
		throw_exception(gai_strerror(err));

	int server_socket = -1; 
	for (struct addrinfo *hit = list; hit != NULL; hit = hit->ai_next) {
		server_socket = socket(hit->ai_family, hit->ai_socktype, hit->ai_protocol);
		if (server_socket < 0)
			continue;

		if (connect(server_socket, hit->ai_addr, hit->ai_addrlen) < 0) {
			close(server_socket);
			server_socket = -1;
			continue;
		}

		struct sockaddr_storage local_address;
		socklen_t local_addrlen = sizeof(local_address);
		memset(&local_address, 0, local_addrlen);
		if (getsockname(server_socket, (struct sockaddr *) &local_address, &local_addrlen) < 0) {
			throw_exception("failed to translate local address");
		} else {
			printf("running: ");
			print_address((struct sockaddr *) &local_address);
		}
	}
	freeaddrinfo(list);
	if (server_socket < 0)
		throw_exception("failed to connect to server");

	return server_socket;
}

void echo_service(int server_socket, const char *message)
{
	size_t msglen = strlen(message);
	ssize_t transferred = send(server_socket, message, msglen, 0);
	if (transferred <= 0)
		throw_exception("failed to send message properly");

	printf("sent %d bytes: %s\n", transferred, message);

	char buffer[transferred+1];
	ssize_t received = recv(server_socket, buffer, msglen, 0);
	if (received != msglen)
		throw_exception("data retreived incomplete");

	buffer[msglen] = '\0';
	printf("received %d bytes: %s\n", received, buffer);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		throw_exception("required parameters: <address> <service> <message>");

	const char *address = argv[1];
	const char *service = argv[2];
	const char *message = argv[3];

	int server_socket = setup_connection(address, service);
	echo_service(server_socket, message);
	close(server_socket);
	return 0;
}
