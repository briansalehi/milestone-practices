# 04.03.09 remove & remove_if & erase

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<int> numbers{13,5,57,0,8,61,89};

    // remove elements with value of 0
    std::list<int>::iterator numbers_new_end = remove(numbers.begin(), numbers.end(), 0);
    // if left elements not removed, you'll be facing junk values
    numbers.erase(numbers_new_end, numbers.end()); // removes 0

    numbers_new_end = remove_if (
        numbers.begin()
        , numbers.end()
        , [](const auto& element) { return ((element % 2) != 0); }
    );
    numbers.erase(numbers_new_end, numbers.end()); // only 8 should remain

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
8 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.08. copy & copy_if](./../../04.more_stl/03.algorithms/08.copy.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.10. replace & replace_if](./../../04.more_stl/03.algorithms/10.replace.md)

</div>
