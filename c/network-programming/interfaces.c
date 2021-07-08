#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    struct ifaddrs *interface_list;

    if (getifaddrs(&interface_list) == -1)
    {
        printf("failed to get interface list\n");
        return -1;
    }

    for (struct ifaddrs *interface = interface_list ; interface->ifa_next != NULL ; interface = interface->ifa_next)
    {
        socklen_t family_size;
        char address[100];
        char address_family[INET6_ADDRSTRLEN];

        switch (interface->ifa_addr->sa_family)
        {
            case AF_INET:
                family_size = sizeof(struct sockaddr_in);
                strcpy(address_family,"inet");
                break;
            case AF_INET6:
                family_size = sizeof(struct sockaddr_in6);
                strcpy(address_family,"inet6");
                break;
            default:
                continue;
        }

        int ret = getnameinfo(interface->ifa_addr, family_size, address, sizeof(address), 0, 0, NI_NUMERICHOST);
        if (ret != 0)
        {
            printf("%s\n", gai_strerror(ret));
            continue;
        }

        printf("%s: %s\t%s\n", interface->ifa_name, address_family, address);
    }

    freeifaddrs(interface_list);
    return 0;
}
