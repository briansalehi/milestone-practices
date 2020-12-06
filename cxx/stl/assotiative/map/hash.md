# 03.06.06 hash &lpar;unordered_map & unordered_multimap&rpar;

```cxx
#include <iostream>
#include <string>
#include <unordered_map>

template <typename C>
void describe(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ":" << iterator->second << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << container.size() << std::endl;
    std::cout << "bucket: " << container.bucket_count() << std::endl;
    std::cout << "load factor: " << container.load_factor() << std::endl;
    std::cout << "max load factor: " << container.max_load_factor() << std::endl << std::endl;
}

int main()
{
    std::unordered_map<int, std::string> integers;

    integers.insert(std::make_pair(1, "first"));
    integers.insert(std::make_pair(2, "second"));
    integers.insert(std::make_pair(3, "third"));
    integers.insert(std::make_pair(4, "forth"));
    describe(integers);

    integers.insert(std::make_pair(5, "fifth"));
    describe(integers);

    return 0;
}

```

## Output

```txt
4:forth 3:third 1:first 2:second 
size: 4
bucket: 7
load factor: 0.571429
max load factor: 1

5:fifth 4:forth 3:third 1:first 2:second 
size: 5
bucket: 7
load factor: 0.714286
max load factor: 1

```

## Comments *[not verified]*

As the name suggests, **std::unordered_map** is a derived container of **std::map** working similarly in pairs of (key, value), except that it won't sort elements in insertion. Obviously it will not get any predicate as third template parameter.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.06.05. custom predicate for searching map](./../../03.stl/06.map/05.predicate.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04. More Advanced Topics on STL](./../../04.more_stl/README.md)

</div>
