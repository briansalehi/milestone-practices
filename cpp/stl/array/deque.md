# 03.03.09 deque &lpar;pronounciation rythmes as *deck*&rpar;

```cxx
#include <iostream>
#include <deque>

template <typename T>
void display(const std::deque<T> array) {
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // treat std::deque just like vector except it can grow in forward too
    std::deque<int> integers{1,2,3,4,5};
    display(integers);

    // notice that std::deque stores non-contiguously, so there's no need for reserve()
    integers.push_back(6);
    display(integers);

    integers.push_front(0);
    display(integers);

    integers.pop_back();
    display(integers);

    integers.pop_front();
    display(integers);

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
1 2 3 4 5 6 
0 1 2 3 4 5 6 
0 1 2 3 4 5 
1 2 3 4 5 
```

## Comments *[not verified]*

**std::deque** container is similiar to **std::vector** except that it is also possible to push elements in front of deque container using **push_front()** method.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.08. reserving memory for vector](./../../03.stl/03.array/08.reserve.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.10. measuring the distance of two elements](./../../03.stl/03.array/10.distance.md)

</div>
