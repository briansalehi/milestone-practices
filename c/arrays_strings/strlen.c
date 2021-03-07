#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* string = "this will be printed on your screen!";
    printf("string: %s\n", string);
    printf("length: %zd\n", strlen(string));
    return 0;
}
