# 03.03.01 vector instantiation

```cxx
#include <vector>
#include <string>

int main()
{
    // vector with 10 elements
    std::vector<int> integers(10);
    
    // vector with 5 elements all instantiated with value 3.14
    std::vector<double> pies(5, 3.14);

    // instantiating vector with list initialization
    std::vector<std::string> messages{"C++", "programming"};

    // initializing vector with another one
    std::vector<int> copy(integers);

    // initializing vector with iterators
    std::vector<int> numbers(copy.cbegin(), copy.cend());

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**vectors** are containers looking like arrays except that they can resize in the run-time.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03. the STL Dynamic Arrays &lpar;std::vector, std::deque&rpar;](./../../03.stl/03.array/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.02. inserting element at the end](./../../03.stl/03.array/02.pushback.md)

</div>
