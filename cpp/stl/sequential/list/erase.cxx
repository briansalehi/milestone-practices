#include <iostream>
#include <list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++ iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // there are two ways to remove elements
    std::list<int> integers{1,2,3,4,5};
    display(integers);

    // insert returns iterator, the position of inserted element
    std::list<int>::iterator position = integers.insert(integers.cbegin(), 0);
    display(integers);
    
    // type 1: erase by iterator
    integers.erase(position);
    display(integers);

    // type 2: erase by range
    integers.erase(integers.cbegin(), --integers.cend());
    display(integers);

    // clear container
    integers.clear();
    if (integers.empty()) {
        std::cout << "container empty" << std::endl;
    }

    return 0;
}
