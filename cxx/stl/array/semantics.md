# 03.03.05 accessing vector elements using pointer semantics

```cxx
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> integers{1,2,3,4,5};

    // use constant iterators for displaying array elements
    std::vector<int>::const_iterator elem;
    for (elem = integers.cbegin(); elem != integers.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;

    // another way
    elem = integers.cbegin();
    while (elem != integers.cend()) {
        std::cout << *elem << " ";

        ++elem;
    }
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
1 2 3 4 5 
```

## Comments *[not verified]*

To iterate over vector containers we can use iterators in loops.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.04. accessing vector elements using array semantics](./../../03.stl/03.array/04.subscript.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.06. remove an element from vector](./../../03.stl/03.array/06.remove.md)

</div>
