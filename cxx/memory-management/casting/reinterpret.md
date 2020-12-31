# 02.05.03 reinterpret casting

```cxx
#include <iostream>

int main()
{
    struct memory { short high; short low; }; // little-endian order
    int variable = 10;
    int* address = static_cast<int*>(&variable); // store memory address of variable

    memory* word = reinterpret_cast<memory*>(&address); // cast memory address

    std::cout << "address: " << &variable << std::endl;
    std::cout << "low byte: " << std::hex << word->low << std::endl;
    std::cout << "high byte: " << std::hex << word->high << std::endl;

    return 0;
}

```

## Output

```txt
address: 0x7fff3a9d4234
low byte: 3a9d
high byte: 4234
```

## Comments *[not verified]*

There are times when you need to do implementation-dependent casts
like moving a memory address in an integer type.
to do so, use **reinterpret_cast** operator.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.05.02. dynamic casting](./../../02.object_oriented/05.casting/02.dynamic.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.05.04. constant casting](./../../02.object_oriented/05.casting/04.const.md)

</div>
