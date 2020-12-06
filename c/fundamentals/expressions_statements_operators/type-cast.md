# 01.05.11 type cast

```c
#include <stdio.h>

int main(void)
{
    float fraction = 36.3;
    char letter = (char)fraction;
    int number = (int)fraction;

    printf("%5.2f %5c %5d\n", fraction, letter, number);

    return 0;
}

```

## Output

```txt
36.30     $    36
```

## Comments *[not verified]*

Generally, you don't want to mess with types in a program,  
but in C, casting one type to another is permitted as it
sometimes is needed.

Be aware that, casting some types to other are strong not
recommended as they will truncate the value of casted
variable. Casting float to int can be an obvious example.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05.10. operator precedence](./../../01.the_basics/05.expressions_statements_operators/10.operator-precedence.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06. control statements](./../../01.the_basics/06.control_statements/00.README.md)

</div>
</div>
