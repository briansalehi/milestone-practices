# 01.05.08 sizeof operator

```cxx
#include <iostream>

int main()
{
    // don't forget to initialize array
    const size_t length = 100;
    int array[length] = {0};

    std::cout << "sizeof array: " << sizeof(array) << std::endl;
    std::cout << "sizeof first element: " << sizeof(array[0]) << std::endl;
    std::cout << "sizeof array is also equal to sizeof first element by length of array: ";
    std::cout << sizeof(array[0]) * length << std::endl;

    return 0;
}

```

## Output

```txt
sizeof array: 400
sizeof first element: 4
sizeof array is also equal to sizeof first element by length of array: 400
```

## Comments *[not verified]*

Array size is equal to the size of its first element multiplied by its length.  
This is becuase arrays contain only one type of elements, which all of them have the same size too,
even if they are of type char *. Such array does not hold strings, but the address pointing to the
location of memory that holds the string. So what the array is holding is just the memory addresses,
which are of type unsigned long.  

Besides, when you use array name, that name is pointing to the address of the first element of the array.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.07. compound operators](./../../01.the_basics/05.expressions&statements&operators/07.compound.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06. Program Flow Control](./../../01.the_basics/06.program_flow/README.md)

</div>
