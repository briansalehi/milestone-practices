# 03.06.01 map instantiation

```cxx
#include <map>
#include <string>

// predicate class
template <typename K>
struct descending {
    bool operator() (const K& lhs, const K& rhs) { return (lhs > rhs); }
};

int main()
{
    // no initialization
    std::map<int, std::string> map1;
    std::multimap<int, std::string> mmap1;

    // initializing with another container
    std::map<int, std::string> map2(map1);
    std::multimap<int, std::string> mmap2(mmap1);

    // initializing with iterator
    std::map<int, std::string> map3(map1.cbegin(), map1.cend());
    std::multimap<int, std::string> mmap3(mmap1.cbegin(), mmap1.cend());

    // initializing with predicate sort
    std::map<int, std::string, descending<int>> map4(map1.cbegin(), map1.cend());
    std::multimap<int, std::string, descending<int>> mmap4(mmap1.cbegin(), mmap1.cend());

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**std::map** is a container like set, elements will be sorted when inserted into it.
But it contains a pair of (key, value) instead of ony an element.  
**std::map** is a template container, to initialize one, we need to specify key and value types.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.06. the STL std::map Classes](./../../03.stl/06.map/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.06.02. inserting element in map](./../../03.stl/06.map/02.insertion.md)

</div>
