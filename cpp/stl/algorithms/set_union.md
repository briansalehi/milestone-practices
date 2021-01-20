# 04.03.20 std::set_union&lpar;&rpar;

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
    std::set<int> couples = {2,4,6,8,10};
    std::set<int> odds = {1,3,5,7,9};

    /*
        insert_iterator will be discussed later
        set_union function needs 5 output iterators,
        we convert input iterator unions.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> numbers;
    std::set_union(odds.begin(), odds.end(), couples.begin(), couples.end(), std::insert_iterator<std::set<int>>(numbers, numbers.begin()));
    display(numbers);

    return 0;
}

```

## Output

```txt
1 2 3 4 5 6 7 8 9 10 
```

## Comments *[not verified]*

**std::set_union** function concatenates two container members and places
the resulting container into fifth parameter which is an output iterator.  
Problem rises when we what to use *container.begin()* at the fifth parameter
as an output iterator.
two reasons make this not to work:

* begin() returns a constant key, and cannot be used as an output iterator
* begibg() cannot be used directly becase *set_union* overwrites existing data in a container
and requires the container to have sufficient space to hold the new information.
**std::insert_iterator** solves this problem by allocating new space to hold new data.
iterators are discussed later in iterators chapter.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.19. regex](./../../04.more_stl/03.algorithms/19.regex.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.21. std::set_intersection&lpar;&rpar;](./../../04.more_stl/03.algorithms/21.set_intersection.md)

</div>
