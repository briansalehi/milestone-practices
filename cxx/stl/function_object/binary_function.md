# 04.01.03 binary function

```cxx
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// binary function object
template <typename numeric>
struct Multiply {
    numeric operator() (const numeric& a, const numeric& b) const {
        return (a * b);
    }
};

// generic display function
template <typename printable>
void Display(const printable& element) { std::cout << element << " "; }

int main()
{
    std::vector<int> multiplicants{1,2,3,4,5,6,7,8,9};
    std::vector<int> multipliers{9,8,7,6,5,4,3,2,1};
    std::list<int> orderedResult;
    
    // resize results container to store multiplied numbers
    orderedResult.resize(multipliers.size());

    // multiply containers and move to result
    transform(multiplicants.cbegin(),
        multiplicants.cend(),
        multipliers.cbegin(),
        orderedResult.begin(),
        Multiply <int>()
    );

    // display containers
    for_each(multiplicants.cbegin(), multiplicants.cend(), Display<int>);
    std::cout << std::endl;
    for_each(multipliers.cbegin(), multipliers.cend(), Display<int>);
    std::cout << std::endl;
    for_each(orderedResult.cbegin(), orderedResult.cend(), Display<int>);
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 
9 16 21 24 25 24 21 16 9 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.01.02. unary predicate](./../../04.more_stl/01.function_object/02.unary_predicate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.01.04. binary predicate](./../../04.more_stl/01.function_object/04.binary_predicate.md)

</div>
