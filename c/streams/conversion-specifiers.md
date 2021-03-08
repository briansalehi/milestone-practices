# 01.04.03 conversion specifiers

```c
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

```

## Output

```txt
%a: 0x1.9p+6 	%A: 0X1.9P+6 
%c: B 
%d: 1 	%i: 2 
%u: 100 
%f: 3.141592 
%e: 1.600000e+10 	%E: 1.600000E-13 
%g: 1.6e+10 	%G: 1.6E-13 
%o: 100 
%p: 0x7fffb360578c 
%s: this is a character string 
%x: 10 	%X: 10 
%#x: 0x10 	%#X: 0X10 
%: % 
```

## Comments *[not verified]*

**conversion specifiers** are percent notations used in printf string to let
the compiler know in what type a variable should be converted before printing.

Don't forget to write as many conversion specifiers as there is variables being printed.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.02. putchar](./../../01.the_basics/04.input_output/02.putchar.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.04. modifiers](./../../01.the_basics/04.input_output/04.modifiers.md)

</div>
</div>
