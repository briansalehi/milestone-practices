#include <stdio.h>

int main(void)
{
    int number = 1;

    // floating point number, hex digits and p-notation (C99/C11)
    printf("%%a: %a \t%%A: %A \n", 1e2, 1e2);

    printf("%%c: %c \n", 'B'); // single character

    // signed decimal integer
    printf("%%d: %d \t%%i: %i \n", 1, 2);

    printf("%%u: %u \n", 100); // unsigned decimal integer

    // floating point number, decimal notation
    printf("%%f: %f \n", 3.141592);

    // floating point number, e-notation
    printf("%%e: %e \t%%E: %E \n", 1.6e10, 1.6E-13);

    /*
        use %f %e %E depending on the value.
        %e used if exponent is less than -4 or >= precision
    */
    printf("%%g: %g \t%%G: %G \n", 1.6e10, 1.6E-13);

    printf("%%o: %o \n", 64); // unsigned octal integer

    printf("%%p: %p \n", &number); // pointer

    // character string
    printf("%%s: %s \n", "this is a character string");

    // unsigned hexadecimal integer
    printf("%%x: %x \t%%X: %X \n", 16, 16);

    // unsigned hexadecimal integer with their notation
    printf("%%#x: %#x \t%%#X: %#X \n", 16, 16);

    printf("%%: %% \n"); // prints a percent sign

    return 0;
}
