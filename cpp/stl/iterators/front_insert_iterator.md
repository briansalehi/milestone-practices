# 04.04.04 std::front_insert_iterator

```cxx
#include <iostream>
#include <iterator>
#include <deque>

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    std::deque<int> container;

    std::front_insert_iterator<std::deque<int>> front_iter(container);
    std::copy(array, array+10, front_iter);

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
9 8 7 6 5 4 3 2 1 0 
```

## Comments *[not verified]*

**std::front_insert_iterator** assumes that input container has *push_front()* function within.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04.03. std::back_insert_iterator](./../../04.more_stl/04.iterators/03.back_insert_iterator.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04.05. std::insert_iterator](./../../04.more_stl/04.iterators/05.insert_iterator.md)

</div>
