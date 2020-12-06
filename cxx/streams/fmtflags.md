# 05.02.08 fmtflags

```cxx
#include <iostream>

int main()
{
    // store ios_base flags for future use
    std::ios_base::fmtflags flags = std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl; // ios_base flags unset
    std::cout.setf(flags);
    std::cout << true << std::endl; // ios_base flags set

    // store precision value for future use
    std::streamsize length = std::cout.precision(2);
    std::cout << 1 << std::endl; // precision unset
    std::cout.precision(length);
    std::cout << 1 << std::endl; // precision set

    return 0;
}

```

## Output

```txt
true
true
1
1
```

## Comments *[not verified]*

You can store ios_base flags in a variable of type **std::ios_base::fmtflags** for future use.  
Also, precision value can be stored in variable of type **std::ios_base::streamsize**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.07. std:stringstream](./../../05.advanced/02.streams/07.sstream.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.09. showbase flag](./../../05.advanced/02.streams/09.showbase.md)

</div>
