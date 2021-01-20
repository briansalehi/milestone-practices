# 05.02.09 showbase flag

```cxx
#include <iostream>

int main()
{
    std::ios_base::fmtflags base = std::ios_base::showbase;
    std::cout << std::hex << 0x1f << std::endl;
    std::cout.setf(base);
    std::cout << std::hex << 0x1f << std::endl;

    return 0;
}

```

## Output

```txt
1f
0x1f
```

## Comments *[not verified]*

Number bases (binary, octal, decimal and hexadecimal) will not be show in output streams by default.  
This behaviour can be changed by setting the **showbase** flag in stream object.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.08. fmtflags](./../../05.advanced/02.streams/08.fmtflags.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.10. showpoint flag](./../../05.advanced/02.streams/10.showpoint.md)

</div>
