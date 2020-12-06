# 04.05.03 std::priority_queue

```cxx
#include <functional>
#include <iostream>
#include <vector>
#include <queue>

int main()
{
    // initialization
    std::priority_queue<int> queueOfInts;
    std::priority_queue<double> queueOfDoubles;
    std::priority_queue<int, std::vector<int>> queueOfVectorInts;
    std::priority_queue<int, std::vector<int>, std::greater<int>> priority_queueWithPredicate;
    std::priority_queue<int> queueOfCopy(queueOfInts);

    // instantiation, unordered values
    std::priority_queue<int> people;
    people.push(2);
    people.push(1);
    people.push(3);

    // priority_queue size
    std::cout << "priority queue size: " << people.size() << std::endl;

    // back of priority_queue
    std::cout << "front element: " << people.top() << std::endl;

    // display elements
    while (! people.empty()) {
        std::cout << "element: " << people.top() << std::endl;
        // remove top element
        people.pop();
    }

    if (people.empty()) {
        std::cout << "priority queue is empty" << std::endl;
    }

    return 0;
}

```

## Output

```txt
priority queue size: 3
front element: 3
element: 3
element: 2
element: 1
priority queue is empty
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.05.02. std::queue](./../../04.more_stl/05.adaptive/02.queue.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.06. STL Bit Flags by std::bitset](./../../04.more_stl/06.bitset/README.md)

</div>
