# 01.05.02 increment & decrement

```cxx
#include <iostream>

int main()
{
    int first = 10;
    std::cout << "first number: " << first << std::endl;

    // postfix increment operator, first assign r-value to l-value then increment r-value
    int second = first ++;
    std::cout << "first number after increment: " << first;
    std::cout << " and second: " << second << std::endl;

    // reset value
    first = 10;
    std::cout << "first number: " << first << std::endl;

    // prefix increment operator, first increment r-value then assign it to l-value
    second  = ++ first;
    std::cout << "first number after incremented: " << first;
    std::cout << " and second: " << second << std::endl;

    return 0;
}

```

## Output

```txt
first number: 10
first number after increment: 11 and second: 10
first number: 10
first number after incremented: 11 and second: 11
```

## Comments *[not verified]*

Notice the expression **rvalue** and **lvalue**.  
When we refer to **rvalue**, we generally are talking about the right operand of equation.  
And otherwise, when we refer to **lvalue**, we are talking about the left operand of the equation.  
The difference between rvalue and lvalue is that an lvalue is an object reference and a rvalue is a value.  
An lvalue always has a defined region of storage, so you can take its address.  
An rvalue is an expression that is not an lvalue.  
Examples of rvalues include literals,
the results of most operators, and function calls that return nonreferences.  
An rvalue does not necessarily have any storage associated with it.

So, ++rvalue, increments the rvalue and then assigns to the lvalue if there's any.  
rvalue++, assigns rvalue to the lvalue if there's any and then increments it.  
Some might argue that prefix ++ operator is faster, we will discuss it in classes and objects chapters.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.01. arithmetic operations](./../../01.the_basics/05.expressions&statements&operators/01.arithmetic.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.03. equality operator](./../../01.the_basics/05.expressions&statements&operators/03.equality.md)

</div>
