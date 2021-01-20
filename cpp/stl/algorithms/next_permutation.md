# 04.03.23 std::next_permutation

```cxx
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string container = "CIA";
    std::sort(container.begin(), container.end());

    while (std::next_permutation(container.begin(), container.end())) {
        std::cout << container << std::endl;
    }

    return 0;
}

```

## Output

```txt
AIC
CAI
CIA
IAC
ICA
```

## Comments *[not verified]*

**next_permutation()** function will modify container contents, so it cannot be used with constant iterators.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.22. std::set_difference&lpar;&rpar;](./../../04.more_stl/03.algorithms/22.set_difference.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04. Iterators](./../../04.more_stl/04.iterators/README.md)

</div>
