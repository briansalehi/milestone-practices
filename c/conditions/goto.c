#include <stdio.h>

int main(void)
{
    int counter = 0;

__label:
    printf("this is so lame!\n");
    if (counter++ < 3) {
        goto __label;
    }

    return 0;
}
