#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(void)
{
	/* create socket to apply options */
	int local_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (local_socket < 0)
		return 1;

	/* retrieve TTL value */
	int optval;
	socklen_t optlen = sizeof(optval);
	if (getsockopt(local_socket, IPPROTO_IP, IP_TTL, &optval, &optlen) < 0)
		return 2;
	else
		printf("socket time-to-live: %d\n", optval);

	/* modify TTL value */
	optval = 3;
	if (setsockopt(local_socket, IPPROTO_IP, IP_TTL, &optval, optlen) < 0)
		return 3;
	else
		printf("ttl modified: %d\n", optval);

	/* check if TTL changed */
	if (getsockopt(local_socket, IPPROTO_IP, IP_TTL, &optval, &optlen) < 0)
		return 4;
	else
		printf("socket time-to-live: %d\n", optval);

	close(local_socket);
	return 0;
}
	
