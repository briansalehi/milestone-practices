# 03.05.05 hash set implementation &lpar;std::unordred_set, std::unordered_multiset&rpar;

```cxx
#include <iostream>
#include <unordered_set>

template <typename C>
void describe(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << container.size() << std::endl;
    std::cout << "bucket: " << container.bucket_count() << std::endl;
    std::cout << "load factor: " << container.load_factor() << std::endl;
    std::cout << "max load factor: " << container.max_load_factor() << std::endl << std::endl;
}

int main()
{
    std::unordered_set<int> integers{1,2,3,4};
    describe(integers);

    integers.insert(5);
    describe(integers);

    return 0;
}

```

## Output

```txt
4 3 2 1 
size: 4
bucket: 5
load factor: 0.8
max load factor: 1

5 1 2 3 4 
size: 5
bucket: 11
load factor: 0.454545
max load factor: 1

```

## Comments *[not verified]*

**this practice needs to be explained specifically**

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.05.04. erasing elements from set](./../../03.stl/05.set/04.erase.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.06. the STL std::map Classes](./../../03.stl/06.map/README.md)

</div>
