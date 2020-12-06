# 04.02.01 lambda as unary function

```cxx
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

std::function<void(const int&)> sort_elements = [](const int& element) { std::cout << element << " "; };
std::function<void(const std::pair<int, std::string>&)> sort_pairs =
[](const std::pair<int, std::string>& pair) { std::cout << pair.first << ": " << pair.second << std::endl; };

int main()
{
    // displayed std::vector elements by lambda function
    std::vector<int> numbersInVector{2,5,3,1,4};
    for_each(numbersInVector.cbegin() , numbersInVector.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::deque elements by lambda function
    std::deque<int> numbersInDeque{2,5,3,1,4};
    for_each(numbersInDeque.cbegin() , numbersInDeque.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::list elements by lambda function
    std::list<int> numbersInList{2,5,3,1,4};
    for_each(numbersInList.cbegin() , numbersInList.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::set elements by lambda function
    std::set<int> numbersInSet{2,5,3,1,4};
    for_each(numbersInSet.cbegin() , numbersInSet.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::map pairs by lambda function, notice the change in lamda implementation
    std::map<int, std::string> numbersInMap;
    numbersInMap.insert(std::make_pair(2, "two"));
    numbersInMap.insert(std::make_pair(5, "five"));
    numbersInMap.insert(std::make_pair(3, "three"));
    numbersInMap.insert(std::make_pair(1, "one"));
    numbersInMap.insert(std::make_pair(4, "four"));
    for_each(numbersInMap.cbegin() , numbersInMap.cend() , sort_pairs);

    return 0;
}

```

## Output

```txt
2 5 3 1 4 
2 5 3 1 4 
2 5 3 1 4 
1 2 3 4 5 
1: one
2: two
3: three
4: four
5: five
```

## Comments *[not verified]*

**lambda** functions can be used as anonymous functions in the same line that needs to be invoked,
but when we need to use the same lambda function over and over again, we should store them in a variable of type **std::function<>** template function or to create a function object or simply a function and then use it multiple times.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.02. Lambda Expressions](./../../04.more_stl/02.lambda/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.02.02. lambda as unary predicate](./../../04.more_stl/02.lambda/02.unary_predicate.md)

</div>
