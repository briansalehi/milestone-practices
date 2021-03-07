# 01.04.09 limits

```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("min int: %d\n", INT_MIN);
    printf("max int: %d\n", INT_MAX);

    return 0;
}

```

## Output

```txt
min int: -2147483648
max int: 2147483647
```

## Comments *[not verified]*

you can see the limits of all types on your system by using **limits.h** header file.  
**NOTE:** you might get different results on your system.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.08. sizeof operator's type](./../../01.the_basics/04.input_output/08.sizeof.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05. expressions, statements and operators](./../../01.the_basics/05.expressions_statements_operators/00.README.md)

</div>
</div>
