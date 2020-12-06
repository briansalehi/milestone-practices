# 01.05.10 operator precedence

```c
#include <stdio.h>

int main(void)
{
    int number = 3 * 2 / 6 + (1 + 4) - 5;
    printf("result: %d\n", number);

    return 0;
}

```

## Output

```txt
result: 1
```

## Comments *[not verified]*

Operators have precedence over each other, meaning that when we use
multiple operators in one statement, compiler will evaluate the
statement in precedence order.

The highest precedence in mathematial expressions is parenthesis,
so (1 + 4) would be evaluated first, then multiplication and division
operators have higher precedene over the others but both are on the same
priority.  
So 6 / 2 * 3 will be 1 and finally addition and multiplications are evaluated.  
Finally we will have 1 in result.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05.09. decrement operator](./../../01.the_basics/05.expressions_statements_operators/09.decrement-operator.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05.11. type cast](./../../01.the_basics/05.expressions_statements_operators/11.type-cast.md)

</div>
</div>
