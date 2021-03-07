# 01.04.04 modifiers

```c
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long lnumber = 10;
    long long llnumber = 100;

    // flags, will be discussed in next practice
    printf("%%-+ #0d: %-d %+d % d %#x %0d \n", 1,1,1,1,1);

    // length of fractional point or digit points
    printf("%%6f %%2.5f %%.f: %6f %2.5f %.f \n", 3.141592, 3.141592, 3.131592);

    // indicating short or unsigned short integer
    printf("%%hu %%hd %%hx: %hu %hd %hx \n", 1, 2, 3);

    // indicating short or unsigned short char
    printf("%%hhu %%hhd %%hhx: %hhu %hhd %hhx \n", 1, 2, 3);

    /*
        used with an integer conversion specifier to indicate
        maxint_t or minint_t specified in stdint.h header
    */
    printf("%%jd: %jd \n", (intmax_t)1);

    // used with an integer conversion specifier to indicate long
    printf("%%ld: %ld \n", lnumber);

    // used with an integer conversion specifier to indicate long long
    printf("%%lld: %lld \n", llnumber);

    // used with a float conversion specifier to indicate long double
    printf("%%3.4Lf: %Ld \n", llnumber);

    /*
        used with integer conversion specifier to indicate
        difference between two pointers of type ptrdiff_t
    */
    printf("%%t: %td \n", 1);

    /*
        used with an integer conversion specifier to
        indicate size_t type returned by sizeof operator
    */
    printf("%%z: %zd \n", sizeof(int));

    return 0;
}

```

## Output

```txt
%-+ #0d: 1 +1  1 0x1 1 
%6f %2.5f %.f: 3.141592 3.14159 3 
%hu %hd %hx: 1 2 3 
%hhu %hhd %hhx: 1 2 3 
%jd: 1 
%ld: 10 
%lld: 100 
%3.4Lf: 100 
%t: 1 
%z: 4 
```

## Comments *[not verified]*

Further power of output string manipulation is given to programmers by modifiers.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.03. conversion specifiers](./../../01.the_basics/04.input_output/03.conversion-specifiers.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.05. flags](./../../01.the_basics/04.input_output/05.flags.md)

</div>
</div>
