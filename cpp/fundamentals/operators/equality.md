# 01.05.03 equality operator

```cxx
#include <iostream>

int main()
{
    int bigger = 95;
    int smaller = 30;

    // equality
    if (smaller == bigger) {
        std::cout << smaller << " euqlas to " << bigger << std::endl;
    }

    // inequality
    if (smaller != bigger) {
        std::cout << "two numbers are not equal!" << std::endl;
    }

    // bigger than
    if (bigger > smaller) {
        std::cout << "bigger number is " << bigger << std::endl;
    }

    // smaller that
    if (smaller < bigger) {
        std::cout << "smaller number is " << smaller << std::endl;
    }

    return 0;
}

```

## Output

```txt
two numbers are not equal!
bigger number is 95
smaller number is 30
```

## Comments *[not verified]*

In such cases that you only have one expression below the if statement, you can skip putting parenthesis,
but let's admit it, even the laziest people can push four more buttons on a keyboard.  
Sometimes you might forget to add parenthesis and add an extra line to the if statement, but then it will not work,
and the compiler won't complain about it, as it's not a syntax error.  
It just doesn't worth to seek for the reason of an error for hours just for a parenthesis.  
So, just put the god damn parenthesis on each of if, for and while statements even if they are one line statements.

Equality operators will evaluate the comparison and replaces the comparison statement with either true or false.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.02. increment & decrement](./../../01.the_basics/05.expressions&statements&operators/02.increment&decrement.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.04. logical operators](./../../01.the_basics/05.expressions&statements&operators/04.logical.md)

</div>
