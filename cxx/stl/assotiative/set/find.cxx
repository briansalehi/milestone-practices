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
    std::set<int> integers{1,2,3,4,5};
    display(integers);

    // find an element just like you did in previous containers
    std::set<int>::const_iterator position = integers.find(3);
    if (position != integers.cend()) {
        std::cout << "found element " << *position;
        std::cout << " at position " << distance(integers.cbegin(), position) << std::endl;
    }
    else {
        std::cout << "element not found" << std::endl;
    }
    
    return 0;
}
