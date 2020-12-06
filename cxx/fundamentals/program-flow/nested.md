# 01.06.03 nested conditions

```cxx
#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Enter dividend and divisor: ";
    std::cin >> num1 >> num2;

    // nested conditioning
    if (num1 > num2) {
        if (num2 != 0) {
            std::cout << (num1 / num2) << std::endl;
        }
        else {
            std::cout << "devide by 0 is illegal" << std::endl;
        }
    }
    else {
        std::cout << "first number should be bigger to make integer" << std::endl;
    }

    return 0;
}

```

## Input

```txt
4 2
```

## Output

```txt
Enter dividend and divisor: 2
```

## Comments *[not verified]*

There are many cases in which the flow of control  
needs to be checked one after another. Nested  
control statements can be used to achieve this goal.

Don't get confused with nested scope specifiers.  
Try to make this a habbit to write pairs of braces  
when you need to open one. This way, even if you  
forget about the pairs, you have already had closed  
them right after you opened them.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.02. boundary checking](./../../01.the_basics/06.program_flow/02.boundary.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.04. switch case](./../../01.the_basics/06.program_flow/04.switch_case.md)

</div>
