# 04.05.02 std::queue

```cxx
#include <iostream>
#include <vector>
#include <queue>

int main()
{
    // initialization
    std::queue<int> queueOfInts;
    std::queue<double> queueOfDoubles;
    std::queue<int, std::vector<int>> queueOfVectorInts;
    std::queue<int> queueOfCopy(queueOfInts);

    // instantiation
    std::queue<int> people;
    people.push(1);
    people.push(2);
    people.push(3);

    // queue size
    std::cout << "queue size: " << people.size() << std::endl;

    // back of queue
    std::cout << "last back element: " << people.back() << std::endl;
    std::cout << "last front element: " << people.front() << std::endl;

    // display elements
    while (people.size() != 0) {
        std::cout << "element: " << people.front() << std::endl;
        // remove top element
        people.pop();
    }

    if (people.empty()) {
        std::cout << "queue is empty" << std::endl;
    }

    return 0;
}

```

## Output

```txt
queue size: 3
last back element: 3
last front element: 1
element: 1
element: 2
element: 3
queue is empty
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.05.01. std::stack](./../../04.more_stl/05.adaptive/01.stack.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.05.03. std::priority_queue](./../../04.more_stl/05.adaptive/03.priority_queue.md)

</div>
