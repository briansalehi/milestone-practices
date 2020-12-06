# 02.06.04 validate expression using assert macro

```cxx
#include <iostream>
#include <assert.h>

int main()
{
    // assign nullptr to array and see how assertion fails
    char* array = new char[25];
    // array = nullptr;
    assert(array != nullptr);

    delete [] array;
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Assertion function is defined in **assert.h** header file which evaluates the expression in its parameters then asserts if the expression is true else it will fail.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.03. macro functions](./../../02.object_oriented/06.templates/03.functions.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.05. template functions](./../../02.object_oriented/06.templates/05.function.md)

</div>
