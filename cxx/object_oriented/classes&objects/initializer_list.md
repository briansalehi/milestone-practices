# 02.01.07 initializer list

```cxx
#include <iostream>
#include <initializer_list>

void show(const std::initializer_list<int>& values) {
    for (
        std::initializer_list<int>::const_iterator iterator = values.begin();
        iterator != values.end();
        ++iterator)
    {
        std::cout << *iterator;
    }
    std::cout << std::endl;
}

int main()
{
    std::initializer_list<int> numbers = {0,1,2,3,4,5,6,7,8,9};
    show(numbers);

    return 0;
}

```

## Output

```txt
0123456789
```

## Comments *[not verified]*

Initializer lists that you have been using so far, are themselves containers.
they can be iterated and passed to function paramters.  
Containers and initializer lists will be discussed more later.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.06. constructor initialization list](./../../02.object_oriented/01.classes&objects/06.initialization.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.08. destructor](./../../02.object_oriented/01.classes&objects/08.destructor.md)

</div>
