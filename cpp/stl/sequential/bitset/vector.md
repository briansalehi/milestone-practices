# 04.06.02 vector\<bool\> &lpar;C++14&rpar;

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // vector<bool> instantiations
    std::vector<bool> bits;
    std::vector<bool> bitFlags(5, true);
    std::vector<bool> copyBits(bitFlags);

    // vector<bool> operators
    bits.push_back(true);
    bits.push_back(false);
    bits.push_back(false);
    bits.push_back(true);

    std::cout << "vector size: " << bits.size() << std::endl;

    bits.flip();
    std::cout << "fliped the bits: ";
    for_each(
        bits.cbegin()
        , bits.cend()
        , [](const bool& bit) { std::cout << bit; }
    );
    std::cout << std::endl;
    
    return 0;
}

```

## Output

```txt
vector size: 4
fliped the bits: 0110
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.06.01. bitset](./../../04.more_stl/06.bitset/01.bitset.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05. Advanced C++ Concepts](./../../05.advanced/README.md)

</div>
