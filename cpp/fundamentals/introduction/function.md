# 01.02.04 functions

```cxx
#include <iostream>

// function declaration
void demo_function();

int main()
{
    // invoking function
    demo_function();

    return 0;
}

// function definition
void demo_function()
{
    std::cout << "this is a demo function" << std::endl;
}

```

## Output

```txt
this is a demo function
```

## Comments *[not verified]*

**main** function, is the main function that always exists in all C and C++ programs.

All other functions must be defined before *main function*, either they can only be declared before main and implemented after main,
or they can be implemented in one step before main function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.03. *using* keyword](./../../01.the_basics/02.the_anatomy/03.using.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.05. return statement](./../../01.the_basics/02.the_anatomy/05.return.md)

</div>
