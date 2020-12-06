# 04.04.03 std::back_insert_iterator

```cxx
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> container;

    std::back_insert_iterator<std::vector<int>> back_iter(container);
    std::copy(array, array+10, back_iter);

    std::copy(
        container.cbegin(),
        container.cend(),
        std::ostream_iterator<int,char> (std::cout, " ")
    );
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
0 1 2 3 4 5 6 7 8 9 
```

## Comments *[not verified]*

*std::back_insert_iterator** assumes that the input container has **push_back()** function within.

this iterator only works with containers that allow **rapid insertion complexity**, like vectors.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04.02. std::istream_iterator](./../../04.more_stl/04.iterators/02.istream_iterator.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04.04. std::front_insert_iterator](./../../04.more_stl/04.iterators/04.front_insert_iterator.md)

</div>
