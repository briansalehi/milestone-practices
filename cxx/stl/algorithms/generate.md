# 04.03.05 generate & generate_n

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <ctime>
#include <list>

template <typename container_t>
void display (const container_t& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    srand(time(NULL));

    // generate with unary function
    std::list<int> numbers;
    numbers.resize(3);
    generate(numbers.begin(), numbers.end(), rand);
    display(numbers);

    // generate_n with unary function
    std::list<int> randoms;
    randoms.resize(3);
    generate_n(randoms.begin(), 3, rand);
    display(randoms);

    return 0;
}

```

## Output

```txt
379281906 1305323523 1229717753 
1913450878 1068912924 1916456215 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.04. fill & fill_n](./../../04.more_stl/03.algorithms/04.fill.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.06. for_each](./../../04.more_stl/03.algorithms/06.foreach.md)

</div>
