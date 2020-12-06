#include <iostream>
#include <string>
#include <list>

// generic display function
template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> integers{1,2,3,4};
    display(integers);

    integers.push_back(5);
    integers.push_front(0);
    display(integers);
    
    return 0;
}
