# 01.03.15 global enumerations

```cxx
#include <iostream>

enum Colors {red, green, blue};

int main()
{
    int color = (int)red; // red is visible globally
    std::cout << color << std::endl;

    return 0;
}

```

## Output

```txt
0
```

## Comments *[not verified]*

in previous practice, enumeration was introduced by class expression, though, inherited by C,
in C++ enumerations can also be declared by only **enum** keyword.  
Though, there is a big difference between **enum** and **enum class** declared enumerations.
enumeration members defined by **enum** are visible globally, but enumberation members defined
by **enum class** are scoped (next practice) and their scope must be specified before use.  
Generally, it's best practice to avoid globals.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.14. enumerations](./../../01.the_basics/03.variables&constants/14.enumeration.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.16. scoped enumeration](./../../01.the_basics/03.variables&constants/16.scoped-enumeration.md)

</div>
