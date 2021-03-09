# 03.03.02 inserting element at the end

```cxx
#include <vector>

int main()
{
    std::vector<int> numbers;
    // initialize std::vector using push_back
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    // initializing using list initialization reduces code lines
    std::vector<int> array{1,2,3,4};
    
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

To append an element into vector we use **push_back()** method.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.01. vector instantiation](./../../03.stl/03.array/01.instantiate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.03. inserting element in the middle](./../../03.stl/03.array/03.insert.md)

</div>
