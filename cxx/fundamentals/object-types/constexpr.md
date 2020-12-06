# 01.03.13 *constexpr* keyword

```cxx
/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
=>  constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>
#include <cmath>

constexpr double pi() { return 355.0 / 113; }

// constexpr can consume another constexpr as well
constexpr double tau() { return 2.0 * pi(); }

int main()
{
    std::cout << "pi number equals to " << pi() << std::endl;
    std::cout << "tau number equals to 2 pi: " << tau() << std::endl;
    std::cout << "pi constant is also presumed in most C++ compilers: " << M_PI << std::endl;

    return 0;
}

```

## Output

```txt
pi number equals to 3.14159
tau number equals to 2 pi: 6.28319
pi constant is also presumed in most C++ compilers: 3.14159
```

## Comments *[not verified]*

One of the greatest new features coming by standard 11 is **constexpr**
which can evaluate some calculations in compile time.

Though, don't go rough on constexpr. Compilers might ignore and process it as a function.  
To make a function return double, you should add fraction part to at least one number.
Compilers will assume type double as int, if they don't find using fraction parts necessary.
So you need to force them to use double when values don't have fraction parts by using a trailing *.0* in numbers.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.12. *const* keyword](./../../01.the_basics/03.variables&constants/12.const.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.14. enumerations](./../../01.the_basics/03.variables&constants/14.enumeration.md)

</div>
