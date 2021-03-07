#include <stdio.h>

int main(void)
{
    char answer = 'y';
    while (answer != 'n') {
        printf("do you want to continue? (Y/n)\n");
        scanf("%c", &answer);
    }

    return 0;
}
