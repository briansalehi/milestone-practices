# 03.06.02 inserting element in map

```cxx
#include <iostream>
#include <string>
#include <map>

// display container information
template <typename D>
void describe(const D& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ":" << iterator->second << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::map<int, std::string> map1;

    // initializing with value_type
    map1.insert(std::map<int, std::string>::value_type(1, "One"));
    // initializing with make_pair function
    map1.insert(std::make_pair(2, "Two"));
    // initializing with pair object
    map1.insert(std::pair<int, std::string>(3, "Three"));

    // all above actions can be taken on std::multimap
    // initializing std::multimap with a copy of map
    std::multimap<int, std::string> mmap1(map1.cbegin(), map1.cend());
    mmap1.insert(std::make_pair(4, "Four"));
    mmap1.insert(std::pair<int, std::string>(5, "Five"));

    describe(map1);
    describe(mmap1);
    return 0;
}

```

## Output

```txt
1:One 2:Two 3:Three 
1:One 2:Two 3:Three 4:Four 5:Five 
```

## Comments *[not verified]*

Inserting elements into **std::map** container differs from previous containers we have practiced so far.  
To do so, we can use one of the following approaches:

* using **.value_type(key, value)** method
* using **make_pair(key, value)** function
* using **pair<key type, value type>(key, value)** class

Each one is self-explanatory in practice.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.06.01. map instantiation](./../../03.stl/06.map/01.instantiation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.06.03. finding element in map](./../../03.stl/06.map/03.find.md)

</div>
