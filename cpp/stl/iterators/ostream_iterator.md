# 04.04.01 std::ostream_iterator

```cxx
#include <iostream>
#include <iterator>
#include <array>

int main()
{
    std::array<int, 10> container = {0,1,2,3,4,5,6,7,8,9};
    std::ostream_iterator<int,char> output_iterator(std::cout, " ");
    std::copy(container.cbegin(), container.cend(), output_iterator);
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
0 1 2 3 4 5 6 7 8 9 
```

## Comments *[not verified]*

An Iterator can be either input itererator or output iterator.  
Output iterators do not allow write access to container's data.  
Input iterators do not allow read access to container's data!
that is, you can only write to container.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04. Iterators](./../../04.more_stl/04.iterators/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04.02. std::istream_iterator](./../../04.more_stl/04.iterators/02.istream_iterator.md)

</div>
