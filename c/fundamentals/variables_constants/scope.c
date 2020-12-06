#include <stdio.h>

int implicit = 1;
int explicit = 2;

int main(void)
{
	int local = 3;
	printf("global to whole program: %d\n", explicit);
	printf("local to main function: %d\n", local);

	/* local variable hides the global and there will be no way to access it */
	int implicit = 4;
	printf("local overrides global: %d\n", implicit);

	/* external variables should be declared in a function when being used */
	extern int explicit;
	printf("global variable externaly declared: %d\n", explicit);

	return 0;
}
