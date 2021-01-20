# 01.07.09 passing arguments by reference

```cxx
#include <iostream>

const double pi = 3.14159;

// don't return area, change the value of variable itself in the argument!
void Area(double radius, double &area) {
    area = pi*radius*radius;
}

int main()
{
    double radius = 2, area = 0;
    std::cout << "enter radius: ";
    std::cin >> radius;
    std::cout << radius << std::endl;

    Area(radius, area);
    std::cout << area << std::endl;

    return 0;
}

```

## Input

```txt
2
```

## Output

```txt
enter radius: 2
12.5664
```

## Comments *[not verified]*

Passing an array as a function parameter is simply done by using the address of its first element.  
You might already noticed that variables can also be passed to functions parameters by their addresses.  
This way, it doesn't matter how big value is a variable holding, we just pass its address as a parameter.  
using & character behind a variable's name, we access to the variable's address in memory.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.08. passing an array to a function](./../../01.the_basics/07.functions/08.passing.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.10. inline functions](./../../01.the_basics/07.functions/10.inline.md)

</div>
