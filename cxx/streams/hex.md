# 05.02.12 std::hex flag

```cxx
#include <iostream>

int main()
{
    int number = 20;
    std::cout << number << std::endl;
    std::cout.setf(std::ios_base::showbase);
    std::cout << std::hex << number << std::endl;

    return 0;
}

```

## Output

```txt
20
0x14
```

## Comments *[not verified]*

To print hexadecimal numbers or print integers as hexadecimals, use **hex** flag in output stream.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.11. boolalpha flag](./../../05.advanced/02.streams/11.boolalpha.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.13. precision function](./../../05.advanced/02.streams/13.precision.md)

</div>
