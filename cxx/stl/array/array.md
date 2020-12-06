# 03.03.12 array

```cxx
#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> numbers = {1,2,3,4,5};
    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}

```

## Output

```txt
1
2
3
4
5
```

## Comments *[not verified]*

There is a substitution for C array in C++ 11 and that is **array<type, length>** template class in **array** header file.  
C++ array class has consistency and is more secure over C array and should be used when C arrays are needed.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.11. clear a container](./../../03.stl/03.array/11.clear.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04. the STL std::list and std::forward_list](./../../03.stl/04.list/README.md)

</div>
