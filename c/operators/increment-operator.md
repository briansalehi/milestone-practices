# 01.05.08 increment operator

```c
#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("%d\n", number++);
    printf("%d\n", ++number);

    return 0;
}

```

## Output

```txt
0
2
```

## Comments *[not verified]*

Increment operators are written by ++ sign before or after an operand.  

This operator can be used before an operand as prefix operator or
it can be used after an operand as postfix operator.  

Prefix operator increments then assigns the value,  
postfix operator will assign the value and then evaluates it.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05.07. modulus operator](./../../01.the_basics/05.expressions_statements_operators/07.modulus-operator.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05.09. decrement operator](./../../01.the_basics/05.expressions_statements_operators/09.decrement-operator.md)

</div>
</div>
