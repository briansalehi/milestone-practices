# 04.03.15 partition

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

template <typename container_t>
void display(const container_t& container) {
    for_each(
        container.cbegin()
        , container.cend()
        , [](const auto& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;
}

int main()
{
    std::vector<int> unrelative{3,4,1,5,2};
    std::vector<int> relative(unrelative);
    display(unrelative);

    // partitions the container into two parts, evens and odds
    partition(
        unrelative.begin()
        , unrelative.end()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    display(unrelative);

    // stable_partition preserves relative order of elements but it costs performance
    stable_partition(
        relative.begin()
        , relative.end()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    display(relative);

    return 0;
}

```

## Output

```txt
3 4 1 5 2 
2 4 1 5 3 
4 2 3 1 5 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.14. binary_search](./../../04.more_stl/03.algorithms/14.binary_search.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.16. bounds](./../../04.more_stl/03.algorithms/16.bounds.md)

</div>
