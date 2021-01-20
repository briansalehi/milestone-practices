# 04.03.12 sort & stable_sort

```cxx
#include <algorithm>
#include <iostream>
#include <string>
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
    std::vector<std::string> names{"jack", "brian", "kevin", "veladimir", "sara"};
    display(names);

    // stable sort preserves relative position of equal values, costs performance!
    stable_sort(names.begin(), names.end());
    display(names);

    // descending order
    sort(
        names.begin()
        , names.end()
        , [](const std::string& left, const std::string& right) { return (left > right); }
    );
    display(names);

    // ascending order
    sort(names.begin(), names.end());
    display(names);

    return 0;
}

```

## Output

```txt
jack brian kevin veladimir sara 
brian jack kevin sara veladimir 
veladimir sara kevin jack brian 
brian jack kevin sara veladimir 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.11. random_shuffle](./../../04.more_stl/03.algorithms/11.shuffle.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.13. unique](./../../04.more_stl/03.algorithms/13.unique.md)

</div>
