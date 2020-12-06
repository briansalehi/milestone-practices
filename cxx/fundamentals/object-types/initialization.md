# 01.03.18 list initialization

```cxx
#include <iostream>

int main()
{
    const int static_length = 10;
    int dynamic_length = 5;
    double constant_fraction = 3.141592;

    int number1{static_length};
    int number2{dynamic_length};
    double pi = {constant_fraction};

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << pi << std::endl;

    return 0;
}

```

## Output

```txt
10
5
3.14159
```

## Comments *[not verified]*

Initialization list can be used over conventional initializations.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.17. *define* keyword](./../../01.the_basics/03.variables&constants/17.define.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04. Arrays and Strings](./../../01.the_basics/04.arrays&strings/README.md)

</div>
