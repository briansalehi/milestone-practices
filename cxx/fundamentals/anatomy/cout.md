# 01.02.07 cout options

```cxx
#include <iostream>

int main()
{
    // options required to make floating points not truncated
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float pi = 3.141592;
    std::cout << pi << std::endl;
    double number = 6;
    std::cout << number << std::endl;

    return 0;
}

```

## Output

```txt
3.141592
6.000000
```

## Comments *[not verified]*

input/output streams will be discussed more on later chapters.

setf() is a method to override output streaming behaviour.  
options are held in ios_base class, included in iostream file.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.06. input / output &lpar;I/O&rpar; stream](./../../01.the_basics/02.the_anatomy/06.iostream.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.08. get](./../../01.the_basics/02.the_anatomy/08.get.md)

</div>
