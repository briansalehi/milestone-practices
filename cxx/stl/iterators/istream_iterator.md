# 04.04.02 std::istream_iterator

```cxx
#include <iostream>
#include <iterator>
#include <array>

int main()
{
    std::array<char,10> container = {0,1,2,3,4};
    std::ostream_iterator<int,char> output_iterator(std::cout, " ");

    std::copy(
        std::istream_iterator<int,char>(std::cin),
        std::istream_iterator<int,char>(),
        container.begin()+5
    );
    std::copy(container.cbegin(), container.cend(), output_iterator);
    std::cout << std::endl;

    return 0;
}

```

## Input

```txt
5 6 7 8 9

```

## Output

```txt
0 1 2 3 4 5 6 7 8 9 
```

## Comments *[not verified]*

Input iterator **std::istream_iterator**, gets two type declaration,
first indicates the type to be inserted into container,
second indicates the input type from stream object.  
As parameter only gets stream object.

istream_iterator then gets input from stream object and will terminate input stream when reaches to end of file or an error.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.04.01. std::ostream_iterator](./../../04.more_stl/04.iterators/01.ostream_iterator.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.04.03. std::back_insert_iterator](./../../04.more_stl/04.iterators/03.back_insert_iterator.md)

</div>
