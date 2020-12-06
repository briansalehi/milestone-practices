# 03.06.04 erasing element in map

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

    map1.insert(std::map<int, std::string>::value_type(1, "One"));
    map1.insert(std::make_pair(2, "Two"));
    map1.insert(std::pair <int, std::string>(3, "Three"));
    describe(map1);

    map1.erase(3);
    describe(map1);

    std::multimap<int, std::string> mmap1(map1.cbegin(), map1.cend());
    mmap1.insert(std::make_pair(4, "firstFour"));
    mmap1.insert(std::make_pair(4, "secondFour"));
    mmap1.insert(std::make_pair(4, "thirdFour"));
    mmap1.insert(std::pair <int, std::string>(5, "Five"));
    describe(mmap1);

    mmap1.erase(mmap1.lower_bound(4), mmap1.upper_bound(4));
    describe(mmap1);

    return 0;
}

```

## Output

```txt
1:One 2:Two 3:Three 
1:One 2:Two 
1:One 2:Two 4:firstFour 4:secondFour 4:thirdFour 5:Five 
1:One 2:Two 5:Five 
```

## Comments *[not verified]*

Erasing an element in a map container takes as much effort as it takes to erase an element from other containers.  
Here two new methods we used, **lower_bound()** and **upper_bound()**.
What makes them useful is that there might be multiple instances of a key in **std::multimap** container,
we can access to the position of first and last instances of that key using these two methods.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.06.03. finding element in map](./../../03.stl/06.map/03.find.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.06.05. custom predicate for searching map](./../../03.stl/06.map/05.predicate.md)

</div>
