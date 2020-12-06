# 01.08.01 pointers

```cxx
#include <iostream>

int main()
{
    int number = 15;
    int* pointer = nullptr; // pointer declaration
    pointer = &number; // referencing operator & references to the memory of a variable

    /*

    int* wrong; // fails, pointer points to nowhere
    wrong = 12345; // value gets lost, because there's no memory allocated for it in any specific size

    */

    std::cout << "number:\t" << number << std::endl;
    std::cout << "&number:\t" << std::hex << &number << std::endl;
    std::cout << "pointer:\t" << pointer << std::endl;

    // dereference operator * (actual value a pointer points to)
    std::cout << "*pointer: " << std::dec << *pointer << std::endl;
    std::cout << "&pointer:\t" << std::hex << &pointer << std::endl;

    //  size of pointer
    std::cout << "size of number:\t\t" << std::dec << sizeof(number) << std::endl;
    std::cout << "size of pointer:\t" << sizeof(pointer) << std::endl;

    return 0;
}

```

## Output

```txt
number:	15
&number:	0x7ffee77ae3e4
pointer:	0x7ffee77ae3e4
*pointer: 15
&pointer:	0x7ffee77ae3e8
size of number:		4
size of pointer:	8
```

## Comments *[not verified]*

Pointers are special variables holding memory addresses.  
**notice** that pointers can be declared but point to nowhere in the memory.
This can be dangerious when you want to use this pointer as your program may happen to access to an invalid memory and make your program to crash.  
Always initialize pointers after declaration or temporarily set them to **nullptr**.
This way your program can throw exception if an empty pointer was mistakenly used.
These exceptions can be handled, exceptions will be discussed later.

As pointers are themselves variables, they can point to nowhere which does not make them fool-proof. References instead, cannot point to an invalid memory address. references will be discussed soon.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08. Pointers and References](./../../01.the_basics/08.pointers&references/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.02. dynamic memory allocation using new & delete operators](./../../01.the_basics/08.pointers&references/02.new&delete.md)

</div>
