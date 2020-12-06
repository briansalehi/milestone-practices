# 04.03.17 pair

```cxx
#include <iostream>
#include <string>

int main()
{
    std::pair<int, std::string> element(1, "first");
    std::cout << element.first << " " << element.second << std::endl;

    return 0;
}

```

## Output

```txt
1 first
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.16. bounds](./../../04.more_stl/03.algorithms/16.bounds.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.18. tuple](./../../04.more_stl/03.algorithms/18.tuple.md)

</div>
