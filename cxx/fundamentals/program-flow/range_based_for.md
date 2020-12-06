# 01.06.10 ranged based for loop

```cxx
#include <iostream>

int main()
{
    int array[] = {1,2,3,4,5};
    int factorial = 1;

    for (int element: array) {
        factorial *= element;
    }

    std::cout << factorial << std::endl;

    return factorial;
}

```

## Output

```txt
120
```

## Comments *[not verified]*

**range based for** is a shorter way of iterating over a  
container instead of simple for loop.  
This loop was added in C++11 standard.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.09. for loop](./../../01.the_basics/06.program_flow/09.for.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.11. break & continue](./../../01.the_basics/06.program_flow/11.break&continue.md)

</div>
