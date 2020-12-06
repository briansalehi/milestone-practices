# 04.05.01 std::stack

```cxx
#include <iostream>
#include <vector>
#include <stack>

int main()
{
    // initialization
    std::stack<int> stackedInts;
    std::stack<double> stackedDoubles;
    std::stack<int, std::vector<int>> stackedVectorInts;
    std::stack<int> stackedCopy(stackedInts);

    // instantiation
    std::stack<int> plateNumbers;
    plateNumbers.push(1);
    plateNumbers.push(2);
    plateNumbers.push(3);

    // stack size
    std::cout << "stack size: " << plateNumbers.size() << std::endl;
    std::cout << "top element: " << plateNumbers.top() << std::endl;

    // display elements
    while (plateNumbers.size() != 0) {
        std::cout << "element: " << plateNumbers.top() << std::endl;
        // remove top element
        plateNumbers.pop();
    }

    if (plateNumbers.empty()) {
        std::cout << "stack is empty" << std::endl;
    }

    return 0;
}

```

## Output

```txt
stack size: 3
top element: 3
element: 3
element: 2
element: 1
stack is empty
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.05. STL Adaptive Containers](./../../04.more_stl/05.adaptive/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.05.02. std::queue](./../../04.more_stl/05.adaptive/02.queue.md)

</div>
