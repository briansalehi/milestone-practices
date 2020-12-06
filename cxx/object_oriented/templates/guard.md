# 02.06.02 multiple inclusion guard

```cxx
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <iostream>

int main()
{
    std::cout << "macros are here" << std::endl;
    return 0;
}

#endif

```

## Output

```txt
macros are here
```

## Comments *[not verified]*

**define** macro is usually used in header files and libraries to prevent multiple inclusion of a header file.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.01. define macro](./../../02.object_oriented/06.templates/01.define.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.03. macro functions](./../../02.object_oriented/06.templates/03.functions.md)

</div>
