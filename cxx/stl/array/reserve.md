# 03.03.08 reserving memory for vector

```cxx
#include <iostream>
#include <vector>

void info(const std::vector<int> &vec) {
    std::cout << "size: " << vec.size() << "\t";
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;
}

int main()
{
    std::vector<int> integers;
    // reserved 6 elements in std::vector, memory won't be populated but will be reserved
    integers.reserve(6);
    // std::vector is still empty
    integers.push_back(1);
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    integers.push_back(5);

    std::cout << "initial vector" << std::endl;
    info(integers);
    
    integers.push_back(0);
    std::cout << "pushing back into std::vector" << std::endl;
    info(integers);

    integers.pop_back();
    std::cout << "poping back from std::vector" << std::endl;
    info(integers);

    return 0;
}

```

## Output

```txt
initial vector
size: 5	capacity: 6

pushing back into std::vector
size: 6	capacity: 6

poping back from std::vector
size: 5	capacity: 6

```

## Comments *[not verified]*

Element orders of a vector container can be reversed by **reverse()** method existing in **std::vector** class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.07. size and capacity of vector](./../../03.stl/03.array/07.memory.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.09. deque &lpar;pronounciation rythmes as *deck*&rpar;](./../../03.stl/03.array/09.deque.md)

</div>
