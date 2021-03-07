#include <stdio.h>

int sum(int, int);

int main(void)
{
	printf("%d\n", sum(1,2));
	return 0;
}

int sum(int left, int right)
{
	return left + right;
}
