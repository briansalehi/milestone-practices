# 01.05.04 logical operators

```cxx
#include <iostream>

int main()
{
    bool discount = true;
    bool onsale = true;

    // logical operator and
    if (discount && onsale) {
        std::cout << "this product is on sale and has discount" << std::endl;
    }

    // logical operator or
    if (discount || onsale) {
        std::cout << "this product is either available or has discount" << std::endl;
    }

    // logical operator not
    if (!discount) {
        std::cout << "this product does not have any discount" << std::endl;
    }

    // logical operator xor
    if (discount ^ onsale) {
        std::cout << "this product is on sale or has discount but not both" << std::endl;
    }

    return 0;
    
}

```

## Output

```txt
this product is on sale and has discount
this product is either available or has discount
```

## Comments *[not verified]*

Logical operators differ from bitwise operators which we will discuss in next few pages.

1 && 1 equals to 1 or true as boolean  
but  
1 & 1 equals to 2 or binary 10

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.03. equality operator](./../../01.the_basics/05.expressions&statements&operators/03.equality.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.05. bitwise operators](./../../01.the_basics/05.expressions&statements&operators/05.bitwise.md)

</div>
