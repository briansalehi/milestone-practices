#include <stdio.h>

/* function declaration */
int multiply(const int, const int);

int main(void)
{
	/* function invokation */
	printf("%d\n", multiply(2,2));
	return 0;
}

/* function definition */
int multiply(const int left, const int right)
{
	return left * right;
}
