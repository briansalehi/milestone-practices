# 01.08.04 incrementing and decrementing pointers

```cxx
#include <iostream>

int main()
{
    const size_t length = 3; // const unsigned int
    int *numbers = new int[length];

    // by summing a pointer you can access to different elements of array
    for (size_t iterator = 0; iterator < length; ++iterator) {
        *(numbers + iterator) = iterator;
    }

    for (size_t iterator = 0; iterator < length; ++iterator) {
        std::cout << "Number " << iterator << " : " << *numbers++ << std::endl;
    }

    // incremented pointer must be decremented and set to first block of its memory before deletion
    numbers -= length;
    delete [] numbers;
    return 0;
}

```

## Output

```txt
Number 0 : 0
Number 1 : 1
Number 2 : 2
```

## Comments *[not verified]*

You can increment array's name to access to members of that array, but never forget that you need to decrement it to reach the first element again before using **delete** operator on that array.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.03. allocating array of a type dynamically](./../../01.the_basics/08.pointers&references/03.range.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.05. using const on pointers](./../../01.the_basics/08.pointers&references/05.const.md)

</div>
