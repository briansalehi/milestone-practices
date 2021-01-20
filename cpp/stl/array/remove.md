# 03.03.06 remove an element from vector

```cxx
#include <iostream>
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

    integers.pop_back();
    display(integers);

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
1 2 3 4 
```

## Comments *[not verified]*

To remove an element from a vector use **pop_back()**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.05. accessing vector elements using pointer semantics](./../../03.stl/03.array/05.semantics.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.07. size and capacity of vector](./../../03.stl/03.array/07.memory.md)

</div>
