# 01.06.04 switch case

```cxx
#include <iostream>

int main()
{
    enum traffic_light {
        red = 1,
        yellow,
        green
    };

    int input;
    std::cout << "Enter a number between 1-3 : ";
    std::cin >> input;

    switch (input) {
        case red:
            std::cout << "light is red" << std::endl;
            break;
        case yellow:
            std::cout << "light is yellow" << std::endl;
            break;
        case green:
            std::cout << "light is green" << std::endl;
            break;
        default:
            std::cout << "your input is not in valid range!" << std::endl;
    }

    return 0;
}

```

## Input

```txt
3

```

## Output

```txt
Enter a number between 1-3 : light is green
```

## Comments *[not verified]*

When dealing with kind of data holding only a specific  
possible amount of values, you should use enumeration.  

As an example, a traffic control has only 3 light colors,  
so to prevent the possibility of adding another color to  
this range, we use an enumeration.

Though, an enumeration is declared by integers, its  
elements are not of type int and they should not be  
compared by other types but itself.  
What makes the comparison of type *int* and *traffic_light*  
possible, is because compiler will promote one type to  
the other one having higher rank.  
So in this case, *traffic_light* will be promoted to  
type int and switch case statement compares the values.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.03. nested conditions](./../../01.the_basics/06.program_flow/03.nested.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.05. ternary operator](./../../01.the_basics/06.program_flow/05.ternary.md)

</div>
