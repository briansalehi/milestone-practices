# 04.02.02 lambda as unary predicate

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{15,73,91,14,53,46,12};
    const int divisor = 2;
    std::vector<int>::const_iterator position = numbers.cbegin();

    // find all even numbers in container
    while (position != numbers.cend()) {
        position = find_if(position, numbers.cend()
            // lambda function as unary predicate
            , [](const int& element) { return ((element % divisor) == 0); }
        );
        std::cout << *position << std::endl;
        ++ position;
    }

    return 0;
}

```

## Output

```txt
14
46
12
```

## Comments *[not verified]*

**lambda** functions are a subsitution of predicates.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.02.01. lambda as unary function](./../../04.more_stl/02.lambda/01.unary_function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.02.03. capture list](./../../04.more_stl/02.lambda/03.capture_list.md)

</div>
