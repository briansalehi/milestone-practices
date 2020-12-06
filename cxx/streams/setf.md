# 05.02.14 setf function

```cxx
#include <iostream>

int main()
{
    std::cout << true << std::endl; // no flag is set
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl; // flag has set

    return 0;
}

```

## Output

```txt
1
true
```

## Comments *[not verified]*

**setf** is a function in **cout** namespace that manipulates stream functionality using flags, e.g. *ios_base::boolalpha*.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.13. precision function](./../../05.advanced/02.streams/13.precision.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.15. fill function](./../../05.advanced/02.streams/15.fill.md)

</div>
