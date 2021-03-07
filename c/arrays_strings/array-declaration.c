#include <stdio.h>

int main(void)
{
	int evens[4] = {2,4,6,8};
	int odds[5] = {1,3,5,7,9};

	/* array names always point to the first element */
	printf("%d\n", *evens);
	printf("%d\n", *odds);
	return 0;
}
