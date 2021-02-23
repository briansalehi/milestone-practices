# 01.03.08 *sizeof* keyword

```cxx
#include <iostream>

int main()
{
    int shortNumber = 1000;
    long meduimNumber = 1000000;
    long long largeNumber = 1000000000;

    // size of allocated memory depends on the variable type
    std::cout << sizeof(shortNumber) << std::endl;
    std::cout << sizeof(meduimNumber) << std::endl;
    std::cout << sizeof(largeNumber) << std::endl;

    return 0;
}

```

## Output

```txt
4
8
8
```

## Comments *[not verified]*

**Notice**: output values might differ on your system.

You need to remember that **sizeof()** is an operator, not a function.  
The amount of memory *sizeof()* operator represents does not depend on the value held by a variable,
but it depends on the operating system which you are using.  
Some systems will use int as a 8 byte memory block and some might use 4 bytes so as my system.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.07. overflow](./../../01.the_basics/03.variables&constants/07.overflow.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.09. *auto* keyword](./../../01.the_basics/03.variables&constants/09.auto.md)

</div>
