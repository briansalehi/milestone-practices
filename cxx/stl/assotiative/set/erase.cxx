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

    // erase an element by value or an iterator(like one that returned by find())
    integers.erase(3);
    display(integers);

    integers.clear();
    if(integers.empty())
        std::cout << "container empty" << std::endl;
    
    return 0;
}
