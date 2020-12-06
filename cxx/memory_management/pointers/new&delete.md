# 01.08.02 dynamic memory allocation using new & delete operators

```cxx
#include <iostream>

int main()
{
    // allocates memory in size of an int
    int *number = new int;

    // you must delete a pointer allocated by new
    delete number;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Memory addresses can be assigned to pointers either by **dereference operator &** or by allocating new memory block and assigning the address of its first by to the pointer.  
**new** operator allocates as much memory as you need by the type specifying after it.  
**always** use **delete** operator after you finish working with allocated memories used by **new**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.01. pointers](./../../01.the_basics/08.pointers&references/01.memory.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.03. allocating array of a type dynamically](./../../01.the_basics/08.pointers&references/03.range.md)

</div>
