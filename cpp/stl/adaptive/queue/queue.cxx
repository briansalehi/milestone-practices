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
