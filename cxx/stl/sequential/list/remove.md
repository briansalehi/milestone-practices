# 03.04.04 removing element from list

```cxx
#include <iostream>
#include <list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++ iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // there are two ways to remove elements
    std::list<int> integers{1,2,3,4,5};
    display(integers);

    // insert returns iterator, the position of inserted element
    std::list<int>::iterator position = integers.insert(integers.cbegin(), 0);
    display(integers);
    
    // type 1: erase by iterator
    integers.erase(position);
    display(integers);

    // type 2: erase by range
    integers.erase(integers.cbegin(), --integers.cend());
    display(integers);

    // clear container
    integers.clear();
    if (integers.empty()) {
        std::cout << "container empty" << std::endl;
    }

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
0 1 2 3 4 5 
1 2 3 4 5 
5 
container empty
```

## Comments *[not verified]*

To remove an element from **std::list** container, **erase()** method can be used.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.03. inserting elements in the middle of list](./../../03.stl/04.list/03.insertion.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.05. reversing list elements](./../../03.stl/04.list/05.reverse.md)

</div>
