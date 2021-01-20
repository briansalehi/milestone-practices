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
