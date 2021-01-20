# 04.03.22 std::set_difference&lpar;&rpar;

```cxx
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

void display(std::set<int>& container) {
    std::for_each(container.cbegin(), container.cend(),
        [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;
}

int main()
{
    std::set<int> odds = {1,3,5,7,9};
    std::set<int> primes = {1,2,3,5,7};

    /*
        insert_iterator will be discussed later
        set_difference function needs 5 output iterators,
        we convert input iterator differences.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> differences;
    std::set_difference(odds.begin(), odds.end(), primes.begin(), primes.end(), std::insert_iterator<std::set<int>> (differences, differences.begin()));
    display(differences);

    return 0;
}

```

## Output

```txt
9 
```

## Comments *[not verified]*

as discussed in std::set_union practice page, differences.begin() iterator
cannot be used as an output iterator for two reasons:

* begin() returns a constant key but _std::set_difference_ needs to change container values
* _std::set_difference_ like _std::copy_ does not allocate new space in an empty container,
but **std::insert_iterator** solves this problem.
iterators are discussed later in iterators chapter.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.21. std::set_intersection&lpar;&rpar;](./../../04.more_stl/03.algorithms/21.set_intersection.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.23. std::next_permutation](./../../04.more_stl/03.algorithms/23.next_permutation.md)

</div>
