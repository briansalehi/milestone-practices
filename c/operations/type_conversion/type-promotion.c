#include <stdio.h>

int main(void)
{
	int integer = 3;
	double fraction = 0.14;
	printf("%f\n", integer + fraction); /* integer promoted to double */
	return 0;
}
