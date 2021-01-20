# 03.04.08 std::forward_list

```cxx
#include <iostream>
#include <forward_list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::forward_list<int> integers;
    integers.push_front(5);
    integers.push_front(4);
    integers.push_front(3);
    integers.push_front(2);
    integers.push_front(1);
    integers.push_front(0);
    display(integers);

    integers.pop_front();
    display(integers);

    integers.remove(4);
    display(integers);

    integers.clear();
    display(integers);

    if(integers.empty())
        std::cout << "container empty" << std::endl;
    
    return 0;
}

```

## Output

```txt
0 1 2 3 4 5 
1 2 3 4 5 
1 2 3 5 

container empty
```

## Comments *[not verified]*

**std::forward_list** is a container similar to **std::list** except that it only grows forward and top elements can be removed first.  
This is a FIFO structure container.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.07. sorting list comprising class](./../../03.stl/04.list/07.sort_class.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.05. the STL std::set and std::multiset](./../../03.stl/05.set/README.md)

</div>
