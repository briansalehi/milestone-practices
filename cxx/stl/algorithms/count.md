# 04.03.02 count & count_if

```cxx
#include <algorithm>
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> orderedNumbers{5,2,2,1,1,1,3,4,4};

    for_each(
        orderedNumbers.cbegin()
        , orderedNumbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    // count an element by value
    size_t amount = count(orderedNumbers.cbegin(), orderedNumbers.cend(), 4);
    std::cout << "there are " << amount << " elements having value 4" << std::endl;

    // count by a predicate
    amount = count_if(
        orderedNumbers.cbegin()
        , orderedNumbers.cend()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    std::cout << "there are " << amount << " even numbers" << std::endl;

    return 0;
}

```

## Output

```txt
1 1 1 2 2 3 4 4 5 
there are 2 elements having value 4
there are 4 even numbers
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.01. find & find_if](./../../04.more_stl/03.algorithms/01.find.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.03. search & search_n](./../../04.more_stl/03.algorithms/03.search.md)

</div>
