#include <stdio.h>

int main(void)
{
	int lbit = 13; /* equivalent to bitwise 1101 */
	int hbit = 10; /* equivalent to bitwise 1010 */
	printf("%d\n", lbit | hbit); /* 1111 equivalent to 15*/
	printf("%d\n", lbit & hbit); /* 1000 equivalent to 8*/
	return 0;
}
