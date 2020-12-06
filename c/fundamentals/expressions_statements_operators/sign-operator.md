# 01.05.04 sign operator

```c
#include <stdio.h>

int main(void)
{
    int number = -2 - 1;
    printf("%d\n", number);

    return 0;
}

```

## Output

```txt
-3
```

## Comments *[not verified]*

Don't misinterpret the subtraction and addition operator with sign operator as they are overloaded and look just alike.  
Minus sign can change the algebraic sign of an operand.

Sign operators are held behind an operand, not between operands.  
Therefore, *number* is holding -3 in this example.  
When minus operator is used as subtraction operator, it's said to be a binary operator.  
In turn, when it's used solely behind a operator it's called an unary operator.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05.03. subtraction operator](./../../01.the_basics/05.expressions_statements_operators/03.subtraction-operator.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05.05. multiplication operator](./../../01.the_basics/05.expressions_statements_operators/05.multiplication-operator.md)

</div>
</div>
