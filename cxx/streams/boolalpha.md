# 05.02.11 boolalpha flag

```cxx
#include <iostream>

int main()
{
    std::cout << true << std::endl;
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl;

    return 0;
}

```

## Output

```txt
1
true
```

## Comments *[not verified]*

Boolean values are printed 0 as false and 1 as true in output streams.  
This behaviour can be easily changed by setting **boolalpha** flag in output stream.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.10. showpoint flag](./../../05.advanced/02.streams/10.showpoint.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.12. std::hex flag](./../../05.advanced/02.streams/12.hex.md)

</div>
