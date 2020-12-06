# 04.03.04 fill & fill_n

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <list>

void display(const std::list<int>& container) {
    for (std::list<int>::const_iterator iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> numbers;
    numbers.resize(10);
    display(numbers);

    fill(numbers.begin(), numbers.end(), 9);
    display(numbers);

    fill_n(numbers.begin(), 5, 1);
    display(numbers);

    return 0;
}

```

## Output

```txt
0 0 0 0 0 0 0 0 0 0 
9 9 9 9 9 9 9 9 9 9 
1 1 1 1 1 9 9 9 9 9 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.03. search & search_n](./../../04.more_stl/03.algorithms/03.search.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.05. generate & generate_n](./../../04.more_stl/03.algorithms/05.generate.md)

</div>
