# 05.02.10 showpoint flag

```cxx
#include <iostream>

int main()
{
    const double pi = 3.14;
    std::cout << pi << std::endl;
    std::cout.setf(std::ios_base::showpoint);
    std::cout << pi << std::endl;

    return 0;
}

```

## Output

```txt
3.14
3.14000
```

## Comments *[not verified]*

**showpoint** flag will set set trailing zeros in floating point numbers on output streams.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.09. showbase flag](./../../05.advanced/02.streams/09.showbase.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.11. boolalpha flag](./../../05.advanced/02.streams/11.boolalpha.md)

</div>
