# 04.03.10 replace & replace_if

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<int> numbers{8,5,8,5,8,5};

    replace(numbers.begin(), numbers.end(), 5, 8);

    // even values replaced by -1
    replace_if(
        numbers.begin()
        , numbers.end()
        , [](const int& element) { return ((element % 2) == 0); }
        , -1
    );

    // odd values replaced by -1
    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
-1 -1 -1 -1 -1 -1 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.09. remove & remove_if & erase](./../../04.more_stl/03.algorithms/09.remove.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.11. random_shuffle](./../../04.more_stl/03.algorithms/11.shuffle.md)

</div>
