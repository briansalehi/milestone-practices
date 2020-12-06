# 04.02.03 capture list

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{15,73,91,14,53,46,12};
    int divisor = 2;

    std::vector<int>::const_iterator position = find_if(
        numbers.cbegin()
        , numbers.cend()
        // divisor in capture list
        , [divisor](const int& dividend) { return ((dividend % divisor) == 0); }
    );

    // always check for iterator!
    if (position != numbers.cend()) {
        std::cout << "found element: " << *position << std::endl;
    }
    else {
        std::cout << "no element is divisable by " << divisor << std::endl;
    }

    return 0;
}

```

## Output

```txt
found element: 14
```

## Comments *[not verified]*

The pair of square brackets in lambda functions are not for decorating code!
We can pass the variables from outside of lambda scope, inside its scope by writing them inside those pair of square brackets.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.02.02. lambda as unary predicate](./../../04.more_stl/02.lambda/02.unary_predicate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.02.04. lambda as binary function](./../../04.more_stl/02.lambda/04.binary_function.md)

</div>
