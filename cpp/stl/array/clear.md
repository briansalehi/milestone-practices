# 03.03.11 clear a container

```cxx
#include <iostream>
#include <vector>

int main()
{
    // initialize std::vector
    std::vector<int> integers{1,2,3,4,5};
    // clear std::vector
    integers.clear();
    // empty returns true if container is empty
    if (integers.empty()) {
        std::cout << "empty std::vector" << std::endl;
    }

    return 0;
}

```

## Output

```txt
empty std::vector
```

## Comments *[not verified]*

To clear out elements of a container **clear()** method can be used. To check if a container is empty we use **empty()** method, boolean values will be returned, true if container is empty and false otherwise.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.10. measuring the distance of two elements](./../../03.stl/03.array/10.distance.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.12. array](./../../03.stl/03.array/12.array.md)

</div>
