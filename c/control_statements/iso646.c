#include <stdio.h>
#include <iso646.h>

int main(void)
{
    int flag = 1, state = 0;

    if (flag and state) {
        printf("all true\n");
    }
    else if (not flag and state) {
        printf("only state\n");
    }
    else if (flag and not state) {
        printf("only flag\n");
    }
    else {
        printf("all false\n");
    }

    return 0;
}
