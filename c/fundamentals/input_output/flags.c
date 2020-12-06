#include <stdio.h>

int main(void)
{
    printf("%%-d: %-d %-d \n", -1, 1);
    printf("%%+d: %+d %+d \n", -1, 1);
    printf("%% d: % d % d \n", -1, 1);
    printf("%%#x: %#x %#X \n", 0xf, 0xf);
    printf("%%0d: %0d %0d \n", -1, 1);

    return 0;
}
