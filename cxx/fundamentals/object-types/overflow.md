# 01.03.07 overflow

```cxx
#include <iostream>

int main()
{
    unsigned short unsignedNumber = 0xffff;
    short signedNumber = 0x7fff; // short is abbreviation of signed short
    std::cout << std::hex; // will be discussed later

    // overflow occured as the result equals to: 0
    std::cout << "unsigned short 0x" << unsignedNumber << " + 1 equals: 0x";
    std::cout << ++unsignedNumber << std::endl;

    // overflow occured as the result equals to: -0x8000
    std::cout << "signed short 0x" << signedNumber << " + 1 equals: 0x";
    std::cout << ++signedNumber << std::endl;

    return 0;
}

```

## Output

```txt
unsigned short 0xffff + 1 equals: 0x0
signed short 0x7fff + 1 equals: 0x8000
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.06. no linkage](./../../01.the_basics/03.variables&constants/06.no_linkage.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.08. *sizeof* keyword](./../../01.the_basics/03.variables&constants/08.sizeof.md)

</div>
