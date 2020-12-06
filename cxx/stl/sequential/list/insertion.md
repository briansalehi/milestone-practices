# 03.04.03 inserting elements in the middle of list

```cxx
#include <iostream>
#include <string>
#include <list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++ iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // there are three ways to insert into a container
    std::list<int> integers;

    // type 1: prepend value to the container
    integers.insert(integers.cbegin(), 2);
    integers.insert(integers.cbegin(), 1);
    display(integers);

    // type 2: insert two 0s at the beginning
    integers.insert(integers.cbegin(), 2, 0);
    display(integers);

    // type 3: copy a container into another
    std::list<int> numbers;
    numbers.insert(numbers.cbegin(), ++integers.cbegin(), integers.cend());
    display(numbers);

    return 0;
}

```

## Output

```txt
1 2 
0 0 1 2 
0 1 2 
```

## Comments *[not verified]*

Elements can also be inserted by **insert()** method, which has a few overloaded versions.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.02. pushing elements into list](./../../03.stl/04.list/02.push.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.04. removing element from list](./../../03.stl/04.list/04.remove.md)

</div>
