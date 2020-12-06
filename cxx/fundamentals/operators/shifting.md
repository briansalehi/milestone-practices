# 01.05.06 shifting operators

```cxx
#include <iostream>

int main()
{
    int number = 4;

    std::cout << "number: " << number << std::endl;
    std::cout << "right shift: " << (number >> 1) << std::endl;
    std::cout << "two left shifts: " << (number << 1) << std::endl;

    return 0;
}

```

## Output

```txt
number: 4
right shift: 2
two left shifts: 8
```

## Comments *[not verified]*

If you have trouble understanding logical operations, then you need to study **set theory** on the internet.  
It is not a big deal, all you need to do is to know how binary numbers work.

Do not get confused by shift operator << and >> with insert operation to std::cout << and std::cin >>.  
They are so different and each of them do something differently.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.05. bitwise operators](./../../01.the_basics/05.expressions&statements&operators/05.bitwise.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.07. compound operators](./../../01.the_basics/05.expressions&statements&operators/07.compound.md)

</div>
