# 05.02.13 precision function

```cxx
#include <iostream>

int main()
{
    const double pi = 3.1415;
    std::cout << pi << std::endl; // no precision

    std::cout.precision(3);
    std::cout << pi << std::endl;

    return 0;
}

```

## Output

```txt
3.1415
3.14
```

## Comments *[not verified]*

You can change floating point precisions by **precision** function in std namespace.  
Unlike *std::hex* or similar attributes, presicion will keep working for all of
remaining output streams in the program unless it is changed.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.12. std::hex flag](./../../05.advanced/02.streams/12.hex.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.14. setf function](./../../05.advanced/02.streams/14.setf.md)

</div>
