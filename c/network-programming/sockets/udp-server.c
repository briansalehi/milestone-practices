#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

#define QUEUE_LENGTH 10

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
	char ip[INET6_ADDRSTRLEN+1];
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
		printf("unkown\n");
		return;
	}

	if (inet_ntop(address->sa_family, numeric_ip, ip, sizeof(ip)) == NULL) {
		printf("untracable\n");
		return;
	}

	printf("%s:[%d]\n", ip, port);
}

int create_socket(const char *service)
{
	if (service == NULL)
		throw_exception("no service specified");

	struct addrinfo filter;
	memset(&filter, 0, sizeof(filter));
	filter.ai_family = AF_UNSPEC;
	filter.ai_flags = AI_PASSIVE;
	filter.ai_socktype = SOCK_DGRAM;
	filter.ai_protocol = IPPROTO_UDP;

	struct addrinfo *list;
	int err = getaddrinfo("localhost", service, &filter, &list);
	if (err != 0)
		throw_exception(gai_strerror(err));

	int local_socket = -1;
	for (struct addrinfo *address = list; address != NULL; address = address->ai_next) {
		local_socket = socket(address->ai_family, address->ai_socktype, address->ai_protocol);
		if (local_socket < 0)
			continue;

		if (bind(local_socket, address->ai_addr, address->ai_addrlen) == 0) {
			struct sockaddr_storage local_address;
			socklen_t local_addrsize = sizeof(local_address);
			memset(&local_address, 0, local_addrsize);

			printf("trying address: ");
			if (getsockname(local_socket, (struct sockaddr *) &local_address, &local_addrsize) < 0)
				printf("translation failed\n");
			else
				print_address((struct sockaddr *) &local_address);

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

void echo_service(const int local_socket)
{
	struct sockaddr_storage client_address;
	socklen_t client_addrsize = sizeof(client_address);

	size_t buflen = 1024;
	char buffer[buflen+1];
	ssize_t received = recvfrom(local_socket, buffer, buflen, 0, (struct sockaddr *) &client_address, &client_addrsize);
	if (received <= 0)
		throw_exception("failed to retrieve client data");

	buffer[buflen] = '\0';
	printf("received %ld bytes: %s", received, buffer);
	printf("from: ");
	print_address((struct sockaddr *) &client_address);

	ssize_t transferred = sendto(local_socket, buffer, received, 0, (struct sockaddr *) &client_address, client_addrsize);
	if (transferred != received)
		throw_exception("failed to properly echo back data");

	printf("sent %ld bytes.\n", transferred);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		throw_exception("required parameters: <service>");

	const char *service = argv[1];

	const int local_socket = create_socket(service);

	/* this should be in a forever loop */
	echo_service(local_socket);

	close(local_socket);
	return 0;
}
