#include <stdio.h>

int main(void)
{
    int number;
    printf("enter a number between 1 to 3: ");
    scanf("%d", &number);

    switch(number) {
        case 1:
            printf("number one\n");
            break;
        case 2:
            printf("number two\n");
            break;
        case 3:
            printf("number three\n");
            break;
        default:
            printf("out of range\n");
    }

    return 0;
}
