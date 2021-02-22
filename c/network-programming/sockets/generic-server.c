#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

#define QUEUE_LENGTH 10

void throw_exception(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(1);
}

void print_address(const struct sockaddr *address)
{
	if (address == NULL) {
		printf("NULL\n");
		return;
	}

	void *numeric_ip;
	char string_ip[INET6_ADDRSTRLEN+1];
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
		printf("unkown family\n");
		return;
	}

	if (inet_ntop(address->sa_family, numeric_ip, string_ip, sizeof(string_ip)) == NULL) {
		printf("translation failed\n");
		return;
	}

	printf("%s:[%d]\n", string_ip, port);
}

int create_socket(const char *service)
{
	if (service == NULL)
		throw_exception("no service specified");

	struct addrinfo filter;
	memset(&filter, 0, sizeof(filter));
	filter.ai_flags = AI_PASSIVE;
	filter.ai_family = AF_UNSPEC;
	filter.ai_socktype = SOCK_STREAM;
	filter.ai_protocol = IPPROTO_TCP;

	struct addrinfo *list;
	int err = getaddrinfo(NULL, service, &filter, &list);
	if (err != 0)
		throw_exception(gai_strerror(err));

	int local_socket = -1;
	struct addrinfo *address;
	for (address = list; address != NULL; address = address->ai_next) {
		local_socket = socket(address->ai_family, address->ai_socktype, address->ai_protocol);
		if (local_socket < 0)
			continue;

		if ((bind(local_socket, (struct sockaddr *) address->ai_addr, address->ai_addrlen) == 0) && (listen(local_socket, QUEUE_LENGTH) == 0) ) {
			printf("trying address: ");
			print_address((struct sockaddr *) address->ai_addr);
			break;
		}

		close(local_socket);
		local_socket = -1;
	}
	freeaddrinfo(list);

	if (local_socket < 0)
		throw_exception("failed to create socket");

	return local_socket;
}

int accept_client(const int local_socket)
{
	struct sockaddr_storage client_address;
	socklen_t client_addrsize = sizeof(client_address);
	memset(&client_address, 0, client_addrsize);

	int client_socket = -1;
	client_socket = accept(local_socket, (struct sockaddr *) &client_address, &client_addrsize);
	if (client_socket < 0)
		throw_exception("failed to accept new client");

	printf("client connected: ");
	print_address((struct sockaddr *) &client_address);

	return client_socket;
}

void echo_service(const int client_socket)
{
	const size_t buflen = 1024;
	char buffer[buflen+1];
	ssize_t received = recv(client_socket, buffer, buflen, 0);
	if (received <= 0)
		throw_exception("failed to retrieve data");

	buffer[received] = '\0';
	printf("received %ld bytes: %s", received, buffer);

	ssize_t transferred = send(client_socket, buffer, received, 0);
	if (transferred != received)
		throw_exception("failed to send data");

	printf("sent %ld bytes\n", transferred);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		throw_exception("required parameters: <service>");

	const char *service = argv[1];

	int local_socket = create_socket(service);
	int client_socket = accept_client(local_socket);
	echo_service(client_socket);

	return 0;
}
