# 04.04.06 std::reverse_iterator

```cxx
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> container = {0,1,2,3,4,5,6,7,8,9};
    std::ostream_iterator<int,char> output(std::cout, " ");

    // approach 1
    std::copy(container.rbegin(), container.rend(), output);
    std::cout << std::endl;

    // approach 2
    // container.rbegin() == container.end()
    std::vector<int>::reverse_iterator end = container.rbegin();
    // container.rend() == container.begin()
    std::vector<int>::reverse_iterator begin = container.rbegin();
    std::for_each(begin, end, [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
9 8 7 6 5 4 3 2 1 0 

```

## Comments *[not verified]*

You have two approaches to iterate over a container in reverse order.  
One to use **rbegin()** iterator which points to **end()**,
and **rend()** which points to **begin()** which is first member. 
One problem using this method is that rend points to nothing! that is,
it points to the last member of container but that member does not hold
any value.  
Second approach is to use **std::reverse_iterator** that does it for you.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04.05. std::insert_iterator](./../../04.more_stl/04.iterators/05.insert_iterator.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.05. STL Adaptive Containers](./../../04.more_stl/05.adaptive/README.md)

</div>
