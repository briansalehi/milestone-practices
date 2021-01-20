# 01.07.03 no returning value functions

```cxx
#include <iostream>

void display() {
    std::cout << "I love C++ programming!" << std::endl;
}

int main()
{
    display();

    return 0;
}

```

## Output

```txt
I love C++ programming!
```

## Comments *[not verified]*

Functions do not necessarily return a value, in that case set your function's return type to **void**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.02. multiple parameters](./../../01.the_basics/07.functions/02.parameters.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.04. parameters with default value](./../../01.the_basics/07.functions/04.default.md)

</div>
