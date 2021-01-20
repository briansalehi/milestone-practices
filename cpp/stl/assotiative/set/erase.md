# 03.05.04 erasing elements from set

```cxx
#include <iostream>
#include <set>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set<int> integers{1,2,3,4,5};
    display(integers);

    // erase an element by value or an iterator(like one that returned by find())
    integers.erase(3);
    display(integers);

    integers.clear();
    if(integers.empty())
        std::cout << "container empty" << std::endl;
    
    return 0;
}

```

## Output

```txt
1 2 3 4 5 
1 2 4 5 
container empty
```

## Comments *[not verified]*

Similar to other containers we have worked so far, we can remove an element of a container by **erase()** method.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.05.03. finding element in set](./../../03.stl/05.set/03.find.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.05.05. hash set implementation &lpar;std::unordred_set, std::unordered_multiset&rpar;](./../../03.stl/05.set/05.hash.md)

</div>
