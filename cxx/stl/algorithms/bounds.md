# 04.03.16 bounds

```cxx
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{3,4,1,5,2};

    sort(numbers.begin(), numbers.end());

    std::vector<int>::const_iterator lowbound = lower_bound(numbers.begin(), numbers.end(), 4);
    std::vector<int>::const_iterator upbound = upper_bound(numbers.begin(), numbers.end(), 4);
    
    std::cout << "lower bound of 4: " << *lowbound << std::endl;
    std::cout << "upper bound of 4: " << *upbound << std::endl;

    numbers.insert(lowbound, 4);

    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
lower bound of 4: 4
upper bound of 4: 5
1 2 3 4 4 5 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.15. partition](./../../04.more_stl/03.algorithms/15.partition.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.17. pair](./../../04.more_stl/03.algorithms/17.pair.md)

</div>
