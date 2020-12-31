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
