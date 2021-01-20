# 03.04.01 list instantiation

```cxx
#include <string>
#include <list>

int main()
{
    // std::list with 10 elements
    std::list<int> integers(10);
    
    // std::list with 5 elements all instantiated with value 3.14
    std::list<double> pies(5, 3.14);

    // instantiating std::list with std::list initialization
    std::list<std::string> messages{"C++", "programming"};

    // initializing std::list with another one
    std::list<int> copy(integers);

    // initializing std::list with iterators
    std::list<int> numbers(copy.cbegin(), copy.cend());

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**std::list** containers can be initialized with different types, initializer list, another list object or iterators.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04. the STL std::list and std::forward_list](./../../03.stl/04.list/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.02. pushing elements into list](./../../03.stl/04.list/02.push.md)

</div>
