#include <stdio.h>

int main(void)
{
    float fraction = 36.3;
    char letter = (char)fraction;
    int number = (int)fraction;

    printf("%5.2f %5c %5d\n", fraction, letter, number);

    return 0;
}
