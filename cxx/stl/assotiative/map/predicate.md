# 03.06.05 custom predicate for searching map

```cxx
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

// std::string sort predicate
struct ascending {
    bool operator() (const std::string& lhs, const std::string& rhs) const {
        std::string lname(lhs);
        std::string rname(rhs);

        transform(lhs.cbegin(), lhs.cend(), lname.begin(), ::tolower);
        transform(rhs.cbegin(), rhs.cend(), rname.begin(), ::tolower);
        
        return (lname < rname);
    }
};

// display container information
template <typename D>
void describe(const D& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ": " << iterator->second << std::endl;
    }
    std::cout << std::endl;
}

int main()
{

    // initialize a std::map with default sort predicate
    std::map<std::string, std::string> map1;
    map1.insert(std::make_pair("Peter", "+1 3857641586"));
    map1.insert(std::make_pair("Brian", "+33 7652493856"));
    map1.insert(std::make_pair("Hana", "+12 4732854627"));
    map1.insert(std::make_pair("Marie", "+7 1832795346"));
    describe(map1);

    // initialize a std::multimap with custom sort predicate
    std::multimap<std::string, std::string, ascending> mmap2(map1.cbegin(), map1.cend());

    std::string name;
    std::cout << "enter a name to search(peter): ";
    std::cin >> name;

    // case-sensitive searching in map
    std::map<std::string, std::string>::iterator position = map1.find(name);
    if(position != map1.cend())
        std::cout << "case-sensitive search result: " << position->first << "->" << position->second << std::endl;
    else
        std::cout << "case-sensitive search result: name not found" << std::endl;

    // case-insensitive searching in std::multimap
    position = mmap2.find(name);
    if(position != mmap2.cend())
        std::cout << "case-insensitive search result: " << position->first << ": " << position->second << std::endl;
    else
        std::cout << "case-insensitive search result: name not found" << std::endl;

    return 0;
}

```

## Input

```txt
peter
```

## Output

```txt
Brian: +33 7652493856
Hana: +12 4732854627
Marie: +7 1832795346
Peter: +1 3857641586

enter a name to search(peter): case-sensitive search result: name not found
case-insensitive search result: Peter: +1 3857641586
```

## Comments *[not verified]*

In simple terms, a **predicate** is a class that only holds an execution operator, **.operator()**.
Therefore, that class will only operate as a function and we can pass it as a function pointer to parameters to do tasks like comparison for containers.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.06.04. erasing element in map](./../../03.stl/06.map/04.erase.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.06.06. hash &lpar;unordered_map & unordered_multimap&rpar;](./../../03.stl/06.map/06.hash.md)

</div>
