#include <stdio.h>

main()
{
	short small = 32767; /* maximum value for signed short */
	int integer = 123456789;
	long big = 1111111111111;
	float fractional = 3.14;
	double bigger_fractional = 3.14159265;

	printf("short: %d\n", small);
	printf("int: %d\n", integer);
	printf("long: %ld\n", big);
	printf("float: %f\n", fractional);
	printf("double: %lld\n", bigger_fractional);
}
