# 04.03.13 unique

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename container_t>
void display(const container_t& container) {
    for_each (
        container.cbegin()
        , container.cend()
        , [](const auto& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> names{"jack", "brian", "jack", "jack", "sara"};
    display(names);

    // unique won't completely work on unsorted containers and there's still two jacks
    std::vector<std::string>::iterator names_new_end = unique(names.begin(), names.end());
    // removed elements make empty positions at the end of container which should be removed manually
    names.erase(names_new_end, names.end());
    display(names);

    // unique returns an iterator pointing to the new end of container
    sort(names.begin(), names.end());
    names_new_end = unique (names.begin(), names.end());
    names.erase(names_new_end, names.end());
    display(names);

    return 0;
}

```

## Output

```txt
jack brian jack jack sara 
jack brian jack sara 
brian jack sara 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.12. sort & stable_sort](./../../04.more_stl/03.algorithms/12.sort.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.14. binary_search](./../../04.more_stl/03.algorithms/14.binary_search.md)

</div>
