# 01.08.08 pointing to invalid memory

```cxx
#include <iostream>

int main()
{
    // don't forget to initialize pointer with nullptr
    // bool* isSunny = nullptr;

    std::cout << "is it sunny? (y/n)" << std::endl;
    char userInput = 'y';
    std::cin >> userInput;

    // initialize your pointers with new and make them a constant pointer
    bool* const isSunny = new bool;

    if (userInput == 'y') {
        *isSunny = true;
    }
    // don't miss possible values
    else {
        *isSunny = false;
    }

    std::cout << "sunny state: " << *isSunny << std::endl;

    // ensure you use delete when new was initialized
    if (isSunny) {
        delete isSunny;
    }
    
    return 0;
}

```

## Input

```txt
y
```

## Output

```txt
is it sunny? (y/n)
sunny state: 1
```

## Comments *[not verified]*

In this practice there are comments representing the regular mistakes programmers do.  

* allocate pointers with new and set them to **nullptr** if not initialized with a valid address.
* in conditional statements, don't miss possible values of pointers, don't leave them pointing to invalid address.
* before deleting a block of memory created by new, first check if they have allocated first.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.07. memory leakage](./../../01.the_basics/08.pointers&references/07.leakage.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.09. using try...catch](./../../01.the_basics/08.pointers&references/09.try_catch.md)

</div>
