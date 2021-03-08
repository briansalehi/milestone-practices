# 01.05.09 decrement operator

```c
#include <stdio.h>

int main(void)
{
    int number = 2;
    printf("%d\n", --number);
    printf("%d\n", number--);

    return 0;
}

```

## Output

```txt
1
1
```

## Comments *[not verified]*

Decrement operators are written by -- sign before or after an operand.  

This operator can be used before an operand, as prefix operator. or
it can be used after an operand, as postfix operator.  

Prefix operator decrements then assigns the value,  
Postfix operator will assign the value and then decrements it.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05.08. increment operator](./../../01.the_basics/05.expressions_statements_operators/08.increment-operator.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05.10. operator precedence](./../../01.the_basics/05.expressions_statements_operators/10.operator-precedence.md)

</div>
</div>
