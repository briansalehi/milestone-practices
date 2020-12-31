# 01.08.11 references, substitution of pointers

```cxx
#include <iostream>

// call by reference
void Multiply(int& number)
{
    number *= number;
}

int main()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    Multiply(number);
    std::cout << "result of number x number: " << number << std::endl;

    // referenstd::cing a & b
    // constant references
    const int& reference = number;
    std::cout << "reference of the result: " << reference << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "&result: " << &reference << std::endl;

    return 0;
}

```

## Input

```txt
5
```

## Output

```txt
enter a number: result of number x number: 25
reference of the result: 25
&number: 0x7ffc0ee4357c
&result: 0x7ffc0ee4357c
```

## Comments *[not verified]*

Pointers are variables holding an address value. pointers can point to an invalid memory address or not to point to anywhere at all (nullptr).  
References work similiarly but they are not variables of holding memory address. that is, they do not hold memory addresses, they directly point to them.  
That's the big difference you need to keep in mind when working with pointers and references.

Imagine you want to pass a variable not by value but its address:

```cxx
void function(int* number) { ... }

int main()
{
    int number = 2;
    int* pointer = &number;
    function(pointer);
}
```

What we did here was to send **pointer** as an argument. Remember that *pointer* could also point to an invalid location:

```cxx
int* pointer = nullptr;
```

But by using references, addresses cannot be invalid.

```cxx
void function(int& number) { ... }

int main()
{
    int number = 2;
    int& reference = number;
    function(reference);
}
```

This is because references do not hold addresses like pointers do.  
So, not only using references make your program as fast as using pointers, but they also are safer than pointers!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.10. using nothrow](./../../01.the_basics/08.pointers&references/10.nothrow.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.12. pointer](./../../01.the_basics/08.pointers&references/12.pointer.md)

</div>
