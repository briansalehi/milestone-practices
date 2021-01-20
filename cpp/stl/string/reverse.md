# 03.02.05 string reversal

```cxx
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string sample("ABC");
    std::cout << "sample string: " << sample << std::endl;

    // reversing by iterators
    reverse(sample.begin(), sample.end());
    std::cout << "reversed string: " << sample << std::endl;

    return 0;
}

```

## Output

```txt
sample string: ABC
reversed string: CBA
```

## Comments *[not verified]*

**reverse** is a function to reverse the order of elements in a container existing in **algorithm** header file.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02.04. turncating string](./../../03.stl/02.string/04.truncate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.06. string conversion](./../../03.stl/02.string/06.conversion.md)

</div>
