# 01.05.05 bitwise operators

```cxx
#include <iostream>
#include <bitset>

int main()
{
    unsigned short number = 0b10101010;
    std::bitset<8> bitwiseNot = (~number);

    // bitwise not ~
    std::cout << "~" << (std::bitset<8>) number << ": " << bitwiseNot << std::endl;

    std::bitset<8> bitwiseAnd = (number & 0x0F);
    std::cout << (std::bitset<8>) number << " & 00001111: " << bitwiseAnd << std::endl;

    std::bitset<8> bitwiseOr = (number | 0xF0);
    std::cout << (std::bitset<8>) number << " | 11110000: " << bitwiseOr << std::endl;

    std::bitset<8> bitwiseXor = (number ^ 0xFF);
    std::cout << (std::bitset<8>) number << " ^ 11111111: " << bitwiseXor << std::endl;

    return 0;
}

```

## Output

```txt
~10101010: 01010101
10101010 & 00001111: 00001010
10101010 | 11110000: 11111010
10101010 ^ 11111111: 01010101
```

## Comments *[not verified]*

As mentioned in last practice, bitwise operators are different than logical ones.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.04. logical operators](./../../01.the_basics/05.expressions&statements&operators/04.logical.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.06. shifting operators](./../../01.the_basics/05.expressions&statements&operators/06.shifting.md)

</div>
