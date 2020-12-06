# 01.03.17 *define* keyword

```cxx
/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
    constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
    => defined constants, depricated
*/

#include <iostream>

#define PI 3.14159

int main()
{
    // string replacement, not smart preprocessing
    std::cout << "Pi number: " << PI << std::endl;

    return 0;
}

```

## Output

```txt
Pi number: 3.14159
```

## Comments *[not verified]*

Though, it's the easier way, but it's highly recommended not to use preprocessor directives for variables,
as they do not have types and they are just string replacements.  
There are much better ways to do the same task by constexpr.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.16. scoped enumeration](./../../01.the_basics/03.variables&constants/16.scoped-enumeration.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.18. list initialization](./../../01.the_basics/03.variables&constants/18.initialization.md)

</div>
