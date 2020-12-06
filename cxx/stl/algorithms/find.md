# 04.03.01 find & find_if

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{1,2,3,4,5,6,7,8,9};
    int item = 4;

    // find by a value to search through container
    std::vector<int>::const_iterator found = find(numbers.cbegin(), numbers.cend(), item);

    if (found != numbers.cend())
        std::cout << "found " << *found << std::endl;
    else
        std::cout << "element not found" << std::endl;

    // find_if using a predicate instead of value
    std::vector<int>::const_iterator position = find_if(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) -> bool { return ((element % 2) == 0); }
    );

    if (position != numbers.cend()) {
        std::cout << "found " << *position << std::endl;
    }
    else {
        std::cout << "element not found" << std::endl;
    }

    return 0;
}

```

## Output

```txt
found 4
found 2
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03. STL Algorithms](./../../04.more_stl/03.algorithms/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.02. count & count_if](./../../04.more_stl/03.algorithms/02.count.md)

</div>
