# 04.04.05 std::insert_iterator

```cxx
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> container = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> copy;

    // use as output iterator to make a copy
    std::insert_iterator<std::vector<int>> inserter(copy, copy.begin());

    // copy containers
    std::copy(container.cbegin(), container.cend(), inserter);

    // display
    std::copy(copy.cbegin(), copy.cend(), std::ostream_iterator<int,char>(std::cout," "));
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
0 1 2 3 4 5 6 7 8 9 
```

## Comments *[not verified]*

Use **std::insert_iterator** to convert an algorithm that copies data into one that inserts data.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04.04. std::front_insert_iterator](./../../04.more_stl/04.iterators/04.front_insert_iterator.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04.06. std::reverse_iterator](./../../04.more_stl/04.iterators/06.reverse_iterator.md)

</div>
