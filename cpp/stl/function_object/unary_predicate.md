# 04.01.02 unary predicate

```cxx
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

template <typename printable>
void Describe(const printable& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

// divisable by two predicate
template <typename numeric>
struct Divisable {
    bool operator() (const numeric& input) const {
        return ((input % 2) == 0);
    }
};

int main()
{
    std::vector<int> numbers{53,77,26,89,14,55,78};
    std::deque<int> divisables;

    // find first number divisable by two
    auto position = find_if(numbers.cbegin(), numbers.cend(), Divisable<int>());
    if (position != numbers.cend()) {
        std::cout << *position << std::endl;
    }
    else {
        std::cout << "no number is divisable by two" << std::endl;
    }
    std::cout << std::endl;

    // find all numbers divisable by two
    while (position != numbers.cend()) {
        // add offset to prevent duplicate results
        auto offset = distance(numbers.cbegin(), position);
        position = find_if(numbers.cbegin() + offset, numbers.cend(), Divisable<int>());
        // insert divisable elements into std::deque
        divisables.push_back(*position);
        ++position;
    }

    // print std::deque elements
    Describe(divisables);
    
    return 0;
}

```

## Output

```txt
26

26 14 78 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.01.01. unary function](./../../04.more_stl/01.function_object/01.unary_function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.01.03. binary function](./../../04.more_stl/01.function_object/03.binary_function.md)

</div>
