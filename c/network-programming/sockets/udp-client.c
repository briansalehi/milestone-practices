#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
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
		printf("null\n");
		return;
	}

	void *numeric_ip = NULL;
	char string_ip[INET6_ADDRSTRLEN+1];
	in_port_t port = 0;

	switch (address->sa_family) {
	case AF_INET:
		numeric_ip = &((struct sockaddr_in *) address)->sin_addr.s_addr;
		port = ntohs(((struct sockaddr_in *) address)->sin_port);
		break;
	case AF_INET6:
		numeric_ip = &((struct sockaddr_in6 *) address)->sin6_addr.s6_addr;
		port = ntohs(((struct sockaddr_in6 *) address)->sin6_port);
		break;
	default:
		printf("unknown family\n");
		return;
	}

	if (inet_ntop(address->sa_family, numeric_ip, string_ip, sizeof(string_ip)) == NULL)
		printf("translation failed\n");
	else
		printf("%s:[%d]\n", string_ip, port);
}

int setup_connection(const char *address, const char *service, struct sockaddr *server_address)
{
	if (address == NULL || service == NULL)
		throw_exception("invalid address or service");

	struct addrinfo filter;
	memset(&filter, 0, sizeof(filter));
	filter.ai_family = AF_INET6;
	filter.ai_socktype = SOCK_DGRAM;
	filter.ai_protocol = IPPROTO_UDP;

	struct addrinfo *list;
	int err = getaddrinfo(address, service, &filter, &list);
	if (err < 0)
		throw_exception(gai_strerror(err));

	struct addrinfo *candidate;
	int server_socket = -1;
	for (candidate = list; candidate != NULL; candidate = candidate->ai_next) {
		server_socket = socket(candidate->ai_family, candidate->ai_socktype, candidate->ai_protocol);
		if (server_socket < 0) {
			continue;
		}
		memcpy(server_address, (struct sockaddr *) candidate->ai_addr, candidate->ai_addrlen);
	}

	freeaddrinfo(list);

	if (server_socket < 0)
		throw_exception("failed to create socket");

	return server_socket;
}

void echo_service(const int server_socket, const struct sockaddr *server_address, const char *message)
{
	printf("sending message to: ");
	print_address((struct sockaddr *) server_address);
	ssize_t sent = sendto(server_socket, message, sizeof(message), 0, server_address, sizeof(server_address));
	if (sent <= 0)
		throw_exception("failed to send message");

	printf("sent %ld bytes: %s", sent, message);

	struct sockaddr_storage peer_address;
	socklen_t peer_addrlen = sizeof(peer_address);
	memset(&peer_address, 0, peer_addrlen);

	size_t buflen = sent;
	char buffer[buflen+1];
	ssize_t received = recvfrom(server_socket, buffer, buflen, 0, (struct sockaddr *) &peer_address, &peer_addrlen);
	if (received != sent)
		throw_exception("message not properly retrieved");

	buffer[buflen] = '\0';
	printf("retrieved %ld bytes: %s", received, buffer);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		throw_exception("required parameters: <address> <service> <message>");

	const char *address = argv[1];
	const char *service = argv[2];
	const char *message = argv[3];

	struct sockaddr_storage server_address;
	socklen_t server_addrlen = sizeof(server_address);
	memset(&server_address, 0, server_addrlen);

	int server_socket = setup_connection(address, service, (struct sockaddr *) &server_address);
	echo_service(server_socket, (struct sockaddr *) &server_address, message);

	close(server_socket);
	return 0;
}
