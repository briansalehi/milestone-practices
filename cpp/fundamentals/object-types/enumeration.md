# 01.03.14 enumerations

```cxx
/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
    constant expression using constexpr keyword (C++11)
=>  emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>

enum class TrafficLight {red, yellow, green};

enum class Color {red, yellow, green};

int main()
{
    /*
    Color x = red; // error: which red?
    Color y = TrafficLight::red; // error: this red is not a Color
    */
    Color z = Color::red; // OK

    /*
    int i = Color::yellow; // error: Color::yellow is not an int
    */
    int i = (int)Color::yellow; // explicit conversions are allowed, they will be discuessed later

    /*
    Color c = 2; // error: 2 (type int), is not a Color
    */
    TrafficLight light = TrafficLight::red; // OK

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Enumerations are one of the constant types in C++.  
Though, enumerations can only be defined by integer types, enumeration members are not of type int.
Therefore, they cannot be assigned to integers, unless you convert them explicitely (discussed later).

By default, enum class has only following predefined operatrs:

* assignment operator
* initialization operator
* and comparison operators

But more operators can be implemented on enum classes too.  
For example, we can make an enumeration object increment by one using ++ operator (will be discussed later).

```cpp
// prefix increment operator++ (operator overloading is discussed later)
TrafficLight& operator++ (TrafficLight& light) {
    switch (light) {
        case TrafficLight::red : light = TrafficLight::yellow;
        case TrafficLight::yellow : light = TrafficLight::green;
        case TrafficLight::green : light = TrafficLight::red;
    }
    return light;
}

++light; // using operator++ , now light is yellow
```

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.13. *constexpr* keyword](./../../01.the_basics/03.variables&constants/13.constexpr.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.15. global enumerations](./../../01.the_basics/03.variables&constants/15.global-enumeration.md)

</div>
