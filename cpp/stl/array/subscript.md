# 03.03.04 accessing vector elements using array semantics

```cxx
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> integers{1,2,3,4,5};

    // not a good way to iterate over a container
    for (size_t i = 0; i < integers.size(); ++i) {
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;

    // possible to cross boundaries, not a good idea to use subscript operator
    std::cout << "second element: " << integers[1] << std::endl;
    
    // best way to directly access an element in std::vector, boundaries are safe with at()
    std::cout << "third element: " << integers.at(2) << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
second element: 2
third element: 3
```

## Comments *[not verified]*

**std::vector** container's elements can be accessed like arrays using subscript operator [].

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.03. inserting element in the middle](./../../03.stl/03.array/03.insert.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.05. accessing vector elements using pointer semantics](./../../03.stl/03.array/05.semantics.md)

</div>
