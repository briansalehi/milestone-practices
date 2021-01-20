# 04.03.14 binary_search

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> names{"jack", "brian", "jack", "jack", "sara"};

    // binary search will only work on sorted (and unique) container
    sort(names.begin(), names.end());
    std::vector<std::string>::iterator names_new_end = unique(names.begin(), names.end());
    names.erase(names_new_end, names.end());
    
    bool matched = binary_search(names.cbegin(), names.cend(), "jack");
    // always check for search return
    if (matched) {
        std::cout << "found name jack in container" << std::endl;
    }
    else {
        std::cout << "name not found" << std::endl;
    }

    for_each(
        names.cbegin()
        , names.cend()
        , [](const std::string& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
found name jack in container
brian jack sara 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.13. unique](./../../04.more_stl/03.algorithms/13.unique.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.15. partition](./../../04.more_stl/03.algorithms/15.partition.md)

</div>
