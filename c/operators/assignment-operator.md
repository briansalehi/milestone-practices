# 01.05.01 assignment operator

```c
#include <stdio.h>

int main(void)
{
    int lvalue = 3;
    printf("%d\n", lvalue);

    return 0;
}

```

## Output

```txt
3
```

## Comments *[not verified]*

Back to the simplest C program ever! what do we have here is an assignment operator
surrounded by two operands, which the left one is an lvalue and the right operand is
called an rvalue.

What matters here is how the phrases lvalue and rvalue are defined.  
There is a phrase called *data object* or simply an object that is a
block of space on memory, accessible to the program.  
We can define lvalue as whatever operator that is an object is called lvalue.

An rvalue in return, is whatever operator which is not an lvalue! that is,
there's no finite definition of an rvalue, it's definition is relative and
we call an operator if it's not a lvalue.

Here, 3 is an rvalue because it's not an object and is just a constant literal,
in a different meaning, it's not an lvalue. So, the right operand will be assigned
to the lvalue which is capable of holding that number on memory.

Do not mistakenly interpret = operator as equality, the way it makes sense in Mathematics.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.05. expressions, statements and operators](./../../01.the_basics/05.expressions_statements_operators/00.README.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.05.02. addition operator](./../../01.the_basics/05.expressions_statements_operators/02.addition-operator.md)

</div>
</div>
