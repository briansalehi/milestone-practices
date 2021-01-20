#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void display(const std::vector<T> array) {
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> integers{1,2,3,4,5};
    display(integers);

    // auto deduction of std::vector<int>::const_iterator type
    auto position = find(integers.cbegin(), integers.cend(), 3);
    std::cout << "distance of 3 from the beginning: ";
    // distance can be applied on all containers
    std::cout << distance(integers.cbegin(), position) << std::endl;

    return 0;
}
