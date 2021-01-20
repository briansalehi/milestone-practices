# 03.04.06 sorting list elements

```cxx
#include <iostream>
#include <list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++ iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

// inline function of sort
inline bool descending(const int& lhs, const int& rhs) { return (lhs > rhs); }
inline bool ascending(const int& lhs, const int& rhs) { return (lhs < rhs); }

int main()
{
    std::list<int> numbers{5,2,4,1,3};
    std::list<int> integers(numbers);
    display(numbers);

    numbers.sort();
    display(numbers);

    integers.sort(descending);
    display(integers);

    integers.sort(ascending);
    display(integers);

    return 0;
}

```

## Output

```txt
5 2 4 1 3 
1 2 3 4 5 
5 4 3 2 1 
1 2 3 4 5 
```

## Comments *[not verified]*

There are some methods like **sort()** or **transport()** and other algorithmic functions, that might need you to create a function or object function (will be discussed later) to complete the task of it.  
Imagine you want to sort a container, containing elements of type a special object you have created earlier. How the sort function should know how to sort this container? You decide! You create a predicate function (disscussed later) to complete the action based on a rational way of comparison used to sort your objects.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.05. reversing list elements](./../../03.stl/04.list/05.reverse.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.07. sorting list comprising class](./../../03.stl/04.list/07.sort_class.md)

</div>
