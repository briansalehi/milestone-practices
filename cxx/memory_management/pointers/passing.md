# 01.08.06 passing parameters as pointers

```cxx
#include <iostream>

void Area(const double* const radius, const double* const pi, double* const area) {
    // check for pointers validity
    if (&radius, &pi, &area) {
        *area = (*pi) * (*radius) * (*radius);
    }
}

int main()
{
    const double pi = 3.14159;
    double radius = 0;
    double area = 0;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    // pass the addresses
    Area(&radius, &pi, &area);

    std::cout << "Area of the circle is: " << area << std::endl;
    return 0;
}

```

## Input

```txt
2
```

## Output

```txt
Enter radius: Area of the circle is: 12.5664
```

## Comments *[not verified]*

You can use **const** keyword on arguments passing as a pointer.  
Here **area** is a constant pointer to type double, which makes it impossible to change its address pointer but its value is free to be modified.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.05. using const on pointers](./../../01.the_basics/08.pointers&references/05.const.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.07. memory leakage](./../../01.the_basics/08.pointers&references/07.leakage.md)

</div>
