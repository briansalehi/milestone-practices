# 04.01.01 unary function

```cxx
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

// generic container describer
template <typename D>
struct Describe {
    void operator() (const D& container) const {
            std::cout << container;
    }

    ~Describe() { std::cout << std::endl; }
};

int main()
{
    // instantiating and initializing a vector
    std::vector<int> integers;
    integers.push_back(1);
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    // unary function object as third parameter
    for_each(integers.cbegin(), integers.cend(), Describe<int>());

    std::list<char> characters;
    characters.push_back('A');
    characters.push_back('B');
    characters.push_back('C');
    // unary function object to iterate over a container
    for_each(characters.cbegin(), characters.cend(), Describe<char>());
    
    return 0;
}

```

## Output

```txt
1234

ABC

```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.01. Function Objects](./../../04.more_stl/01.function_object/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.01.02. unary predicate](./../../04.more_stl/01.function_object/02.unary_predicate.md)

</div>
