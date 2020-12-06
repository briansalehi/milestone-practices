# 01.03.12 *const* keyword

```cxx
/*
Constants in C++:

=>  literal constants, such as literal strings
=>  declared by const keyword
    constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>

// before making a variable constant, make sure you won't have to modify it in future
const float pi = 3.1415; // constant variable

int main()
{
    // this string is a literal constant
    std::cout << "Enter circle's radius: ";
    double radius;
    std::cin >> radius;

    double circumference = 2 * pi * radius;
    std::cout << "circle's circumference is = " << circumference << std::endl;

    return 0;
}

```

## Input

```txt
2
```

## Output

```txt
Enter circle's radius: circle's circumference is = 12.566
```

## Comments *[not verified]*

We have 5 constants in C++, which we have two of them in this exercise:

* literal constants: which are the strings written surrounded by single quotes
* const variables: which are declared by **const** keyword

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.11. *typedef* keyword](./../../01.the_basics/03.variables&constants/11.typedef.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.13. *constexpr* keyword](./../../01.the_basics/03.variables&constants/13.constexpr.md)

</div>
