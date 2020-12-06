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
