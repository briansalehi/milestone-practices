# 03.05.01 set instantiation

```cxx
#include <set>

// sort predicate must be a class of generic type
template <typename D>
struct descending {
    bool operator() (const D& lhs, const D& rhs) const { return (lhs < rhs); }
};

int main()
{
    // simple instantiation
    std::set<int> integers;
    std::multiset<double> doubles;

    // instantiating with sort predicate
    std::set<int, descending<int>> sortedInt;
    std::multiset<double, descending<double>> sortedDouble;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Consider **std::set** containers just like **std::list** except that they have a longer write time due to the sorting process right after inserting each element in that container.  
That is, each time you push an element back into this container, the element will not be put in the top position, but it will be put to the proper position to keep the container sorted.  
The predicate function should be defined by you if elements are of type objects, you can also use predefined predicates like **std::less**, etc.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.05. the STL std::set and std::multiset](./../../03.stl/05.set/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.05.02. set insertion](./../../03.stl/05.set/02.insertion.md)

</div>
