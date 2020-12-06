# 03.05.03 finding element in set

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

    // find an element just like you did in previous containers
    std::set<int>::const_iterator position = integers.find(3);
    if (position != integers.cend()) {
        std::cout << "found element " << *position;
        std::cout << " at position " << distance(integers.cbegin(), position) << std::endl;
    }
    else {
        std::cout << "element not found" << std::endl;
    }
    
    return 0;
}

```

## Output

```txt
1 2 3 4 5 
found element 3 at position 2
```

## Comments *[not verified]*

To find an element in a container, first a variable of type **constant iterator**
needs to be declared and the return value of function **find()** be assigned to it.
If you need to find more than one instance of an element, you can make the iterator non-constant
and increment it in a loop until you hit the botton of the container.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.05.02. set insertion](./../../03.stl/05.set/02.insertion.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.05.04. erasing elements from set](./../../03.stl/05.set/04.erase.md)

</div>
