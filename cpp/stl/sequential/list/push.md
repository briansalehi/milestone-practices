# 03.04.02 pushing elements into list

```cxx
#include <iostream>
#include <string>
#include <list>

// generic display function
template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> integers{1,2,3,4};
    display(integers);

    integers.push_back(5);
    integers.push_front(0);
    display(integers);
    
    return 0;
}

```

## Output

```txt
1 2 3 4 
0 1 2 3 4 5 
```

## Comments *[not verified]*

Elements can be inserted in the back and front of a list container using **push_back()** and **push_front()** methods.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.01. list instantiation](./../../03.stl/04.list/01.instantiation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.03. inserting elements in the middle of list](./../../03.stl/04.list/03.insertion.md)

</div>
