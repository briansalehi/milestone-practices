# 01.06.06 *goto* statement &lpar;depricated&rpar;

```cxx
#include <iostream>

int main()
{
    char answer = 'n';
__global:
    std::cout << "using goto statement is poor programming" << std::endl;
    std::cout << "would you like to still use it? (y/n)";
    std::cin >> answer;
    std::cout << std::endl;

    // goto statement, do not use goto, it's poor programming
    if (answer == 'y') {
        goto __global;
        std::cout << "good choice!" << std::endl;
    }

    return 0;
}

```

## Input

```txt
y
y
y
n

```

## Output

```txt
using goto statement is poor programming
would you like to still use it? (y/n)
using goto statement is poor programming
would you like to still use it? (y/n)
using goto statement is poor programming
would you like to still use it? (y/n)
using goto statement is poor programming
would you like to still use it? (y/n)
```

## Comments *[not verified]*

Want to use **goto** statement? don't!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.05. ternary operator](./../../01.the_basics/06.program_flow/05.ternary.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.07. while](./../../01.the_basics/06.program_flow/07.while.md)

</div>
