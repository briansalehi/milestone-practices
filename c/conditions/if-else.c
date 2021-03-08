#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("number is positive\n");
    }
    else if (number == 0) {
        printf("number is zero\n");
    }
    else {
        printf("number is negative\n");
    }

    return 0;
}
