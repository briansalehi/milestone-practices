#include <stdio.h>

void display(const char*);

int main(void)
{
	display("this goes into output stream");
	return 0;
}

void display(const char *string)
{
	printf("%s\n", string);
}
