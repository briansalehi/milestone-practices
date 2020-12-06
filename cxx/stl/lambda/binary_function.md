# 04.02.04 lambda as binary function

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

void display(const int& element) {
    std::cout << element << " ";
}

int main()
{
    std::vector<int> multiplicand{1,2,3,4,5};
    std::vector<int> multiplier{5,4,3,2,1};
    std::vector<int> result;
    result.resize(multiplier.size());

    transform(
        multiplicand.cbegin()
        , multiplicand.cend()
        , multiplier.cbegin()
        , result.begin()
        , [](const int& a, const int& b) { return (a + b); }
    );

    for_each( multiplicand.cbegin(), multiplicand.cend(), display);
    std::cout << std::endl;

    for_each( multiplier.cbegin(), multiplier.cend(), display);
    std::cout << std::endl;
    std::cout << "---------" << std::endl;

    for_each( result.cbegin(), result.cend(), display);
    std::cout << std::endl;
    
    return 0;
}

```

## Output

```txt
1 2 3 4 5 
5 4 3 2 1 
---------
6 6 6 6 6 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.02.03. capture list](./../../04.more_stl/02.lambda/03.capture_list.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.02.05. lambda as binary predicate](./../../04.more_stl/02.lambda/05.binary_predicate.md)

</div>
