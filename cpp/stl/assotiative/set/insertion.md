# 03.05.02 set insertion

```cxx
#include <iostream>
#include <set>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set<int> integers;
    std::set<int> copy;
    std::multiset<double> doubles;

    // std::set insertion by values
    integers.insert(4);
    integers.insert(5);
    integers.insert(4);
    integers.insert(4);

    doubles.insert(3.1415);
    doubles.insert(2.7182);
    doubles.insert(3.1415);
    doubles.insert(3.1415);

    // std::set insertion by iterators
    copy.insert(integers.cbegin(), integers.cend());

    display(integers);
    display(doubles);
    display(copy);

    // count the number of a value in std::multiset
    std::cout << "number of 4s in integers container: " << integers.count(4) << std::endl;
    std::cout << "number of 4s in doubles container: " << doubles.count(3.1415) << std::endl;

    return 0;
}

```

## Output

```txt
4 5 
2.7182 3.1415 3.1415 3.1415 
4 5 
number of 4s in integers container: 1
number of 4s in doubles container: 3
```

## Comments *[not verified]*

**insert()** method also exists in **std::set** container and can be used to insert elements.  
Notice the **count()** function we used at the end of our program. You will soon face a vast majority of methods and algorithm functions working with standard containers. The reason is that there are dozens of data structures supported by these containers and they are powerful enough to do anything you need.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.05.01. set instantiation](./../../03.stl/05.set/01.instantiation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.05.03. finding element in set](./../../03.stl/05.set/03.find.md)

</div>
