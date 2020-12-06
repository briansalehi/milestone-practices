# 03.04.05 reversing list elements

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
    std::list<int> numbers{1,2,3,4,5};
    display(numbers);

    // reverse does not take any parameter(this is different than std::reverse)
    numbers.reverse();
    display(numbers);

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
5 4 3 2 1 
```

## Comments *[not verified]*

Elements' order of a container can be reversed with **reverse()** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.04. removing element from list](./../../03.stl/04.list/04.remove.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.06. sorting list elements](./../../03.stl/04.list/06.sort.md)

</div>
