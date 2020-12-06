# 03.03.07 size and capacity of vector

```cxx
#include <iostream>
#include <vector>

void info(const std::vector<int> &vec) {
    std::cout << "size: " << vec.size() << "\t";
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;
}

int main()
{
    std::vector<int> integers(5,0);
    std::cout << "initial std::vector" << std::endl;
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
initial std::vector
size: 5	capacity: 5

pushing back into std::vector
size: 6	capacity: 10

poping back from std::vector
size: 5	capacity: 10

```

## Comments *[not verified]*

Whenever you declare a vector, a block of memory will be allocated for that container.
Actually the operating system will guess the amount of memory to be allocated based on the previous usage.  
We can see the amount of memory allocated for a vector using **capacity()** method and we can see the actual memory used in that vector.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.06. remove an element from vector](./../../03.stl/03.array/06.remove.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.08. reserving memory for vector](./../../03.stl/03.array/08.reserve.md)

</div>
