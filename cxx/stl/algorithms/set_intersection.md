# 04.03.21 std::set_intersection&lpar;&rpar;

```cxx
#include <iostream> // cout, endl
#include <iterator> // set_intersection
#include <algorithm> // for_each
#include <set> // set

void display(std::set<int>& container) {
    std::for_each(container.cbegin(), container.cend(),
        [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;
}

int main()
{
    std::set<int> couples = {2,4,6,8,10};
    std::set<int> primes = {1,2,3,5,7};

    /*
        insert_iterator will be discussed later
        set_intersection function needs 5 output iterators,
        we convert input iterator intersections.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> intersections;
    std::set_intersection(couples.begin(), couples.end(), primes.begin(), primes.end(), std::insert_iterator<std::set<int>> (intersections, intersections.begin()));
    display(intersections);

    return 0;
}

```

## Output

```txt
2 
```

## Comments *[not verified]*

as discussed in **std::set_union** practice page, intersections.begin() iterator
cannot be used as an output iterator for two reasons:

* begin() returns a constant key but **std::set_intersection** needs to change container values
* std::set_intersection like **std::copy** does not allocate new space in an empty container,
but **std::insert_iterator** solves this problem.
iterators are discussed later in iterators chapter.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.20. std::set_union&lpar;&rpar;](./../../04.more_stl/03.algorithms/20.set_union.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.22. std::set_difference&lpar;&rpar;](./../../04.more_stl/03.algorithms/22.set_difference.md)

</div>
