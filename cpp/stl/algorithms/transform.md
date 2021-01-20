# 04.03.07 transform

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::string names("tHis is A sTrinG");

    // built-in predicate ::tolower
    transform(names.cbegin(), names.cend(), names.begin(), ::tolower);

    for_each(
        names.cbegin()
        , names.cend()
        , [](const auto& element) { std::cout << element << ""; }
    );
    std::cout << std::endl;

    std::list<int> numbers{1,2,3,4,5};
    std::list<int> multiplier(numbers.size(), 10);
    std::list<int> results;
    results.resize(numbers.size());

    // built-in std::plus template predicate
    transform(
        numbers.cbegin()
        , numbers.cend()
        , multiplier.cbegin()
        , results.begin()
        , std::plus<int>()
    );

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
this is a string
1 2 3 4 5 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.06. for_each](./../../04.more_stl/03.algorithms/06.foreach.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.08. copy & copy_if](./../../04.more_stl/03.algorithms/08.copy.md)

</div>
