# 04.03.06 for_each

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> numbers;
    numbers.insert(std::make_pair(2, "two"));
    numbers.insert(std::make_pair(5, "five"));
    numbers.insert(std::make_pair(1, "one"));
    numbers.insert(std::make_pair(4, "four"));
    numbers.insert(std::make_pair(3, "three"));

    // using for_each to display container elements
    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const std::pair<int, std::string>& pair) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    );

    return 0;
}

```

## Output

```txt
1: one
2: two
3: three
4: four
5: five
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.05. generate & generate_n](./../../04.more_stl/03.algorithms/05.generate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.07. transform](./../../04.more_stl/03.algorithms/07.transform.md)

</div>
