# 04.03.11 random_shuffle

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> numbers{1,2,3,4,5};
    srand(time(NULL));

    random_shuffle(numbers.begin(), numbers.end());

    for_each (
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
2 3 1 5 4 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.10. replace & replace_if](./../../04.more_stl/03.algorithms/10.replace.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.12. sort & stable_sort](./../../04.more_stl/03.algorithms/12.sort.md)

</div>
