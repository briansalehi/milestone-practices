# 01.07.08 passing an array to a function

```cxx
#include <iostream>

void Display(const int arr[], const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const size_t length = 10;
    int array[length] = {0};
    array[4] = 1;
    array[9] = 1;

    Display(array, length);

    return 0;
}

```

## Output

```txt
0 0 0 0 1 0 0 0 0 1 
```

## Comments *[not verified]*

You already know that array names point to the address of their first element in memory.  
So we can make an advantage of using this behaviour of arrays to pass an
array to a function by only giving the array name to the function's argument.  
Also note how did we write the function's declaration to accept an argument of type array.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.07. function overloading](./../../01.the_basics/07.functions/07.overloading.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.09. passing arguments by reference](./../../01.the_basics/07.functions/09.reference.md)

</div>
