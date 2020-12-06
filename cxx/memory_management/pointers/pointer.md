# 01.08.12 pointer

```cxx
#include <iostream>

int main()
{
    int numbers[10];

    for (int index = 0; index < 10; ++index) {
        numbers[index] = index;
    }

    // name of the array, points to the address of first element not the whole array
    std::cout << numbers << std::endl; // points to &numbers[0]
    std::cout << &numbers[0] << std::endl;

    // dereferenced array name, points to the address of whole array
    std::cout << &numbers << std::endl; // points to (*numbers)[0]

    // so arrays can be copied this way too
    int (*copy)[10] = &numbers;
    std::cout << copy[0] << std::endl;

    return 0;
}

```

## Output

```txt
0x7ffdd9c33728
0x7ffdd9c33728
0x7ffdd9c33728
0x7ffdd9c33728
```

## Comments *[not verified]*

In this practice you can see that all of the representations point to one location.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.11. references, substitution of pointers](./../../01.the_basics/08.pointers&references/11.reference.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.13. function pointer](./../../01.the_basics/08.pointers&references/13.function_pointer.md)

</div>
