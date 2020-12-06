# 01.08.10 using nothrow

```cxx
#include <iostream>

int main()
{
    int* memory = new(std::nothrow) int[0xffff]; // not working anyway!? anything wrong with std::nothrow?
    
    if (memory) {
        delete [] memory;
    }
    else {
        std::cout << "memory allocation failed" << std::endl;
    }

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Using **std::nothrow** with new is supposed to stop **new** from throwing exception but it seems not to be working for me and new throws exception anyway.  
Well I'm going to fix this practice as soon as I understand the cause of it.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.09. using try...catch](./../../01.the_basics/08.pointers&references/09.try_catch.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.11. references, substitution of pointers](./../../01.the_basics/08.pointers&references/11.reference.md)

</div>
