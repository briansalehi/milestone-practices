# 01.06.05 ternary operator

```cxx
#include <iostream>

int main()
{
    int num1 = 1, num2 = 2;

    // ternary operator
    int biggest = (num1 > num2) ? num1 : num2;

    std::cout << biggest << std::endl;

    return 0;
}

```

## Output

```txt
2
```

## Comments *[not verified]*

When dealing with **if something is true then do first else second**  
situations, you can use ternary operators, which evaluates  
the first statement, if it results true, returns the second  
statement, else third one is returned.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.04. switch case](./../../01.the_basics/06.program_flow/04.switch_case.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.06. *goto* statement &lpar;depricated&rpar;](./../../01.the_basics/06.program_flow/06.goto.md)

</div>
