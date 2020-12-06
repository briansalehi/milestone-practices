# 03.03.10 measuring the distance of two elements

```cxx
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void display(const std::vector<T> array) {
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> integers{1,2,3,4,5};
    display(integers);

    // auto deduction of std::vector<int>::const_iterator type
    auto position = find(integers.cbegin(), integers.cend(), 3);
    std::cout << "distance of 3 from the beginning: ";
    // distance can be applied on all containers
    std::cout << distance(integers.cbegin(), position) << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
distance of 3 from the beginning: 2
```

## Comments *[not verified]*

To evaluate the distance of two distinct elements in a container, **distance()** function can be used.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.09. deque &lpar;pronounciation rythmes as *deck*&rpar;](./../../03.stl/03.array/09.deque.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.11. clear a container](./../../03.stl/03.array/11.clear.md)

</div>
