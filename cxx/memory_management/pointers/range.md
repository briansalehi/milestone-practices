# 01.08.03 allocating array of a type dynamically

```cxx
#include <iostream>

int main()
{
    // pointer to array
    int *pointer = new int[10];

    // pointers initialized by new, must be deleted by [] operator
    delete [] pointer;

    // pointer can be used again
    pointer = new int[5];
    delete [] pointer;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Do not get confused by index operator []. Just use **delete** keyword when you allocate only one block of memory by **new*
and use **delete []** after you allocate an array of memory blocks by **new *type*[]**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.02. dynamic memory allocation using new & delete operators](./../../01.the_basics/08.pointers&references/02.new&delete.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.04. incrementing and decrementing pointers](./../../01.the_basics/08.pointers&references/04.increment&decrement.md)

</div>
