# 04.03.08 copy & copy_if

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<int> numbers{1,2,3,4,5};
    std::list<int> copied(numbers.size() * 2);

    // copy container to another, iterator pointing to new last element returns
    std::list<int>::iterator lastElement = copy(
        numbers.cbegin()
        , numbers.cend()
        , copied.begin()
    );

    // copy and copy_if both return iterator pointing to new last element
    lastElement = copy_if(
        numbers.cbegin()
        , numbers.cend()
        , lastElement
        , [](const int& element) { return ((element % 2) == 0); }
    );

    // more elements left blank and can be erased
    copied.erase(lastElement, copied.end());

    for_each(
        copied.cbegin()
        , copied.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 2 4 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.07. transform](./../../04.more_stl/03.algorithms/07.transform.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.09. remove & remove_if & erase](./../../04.more_stl/03.algorithms/09.remove.md)

</div>
