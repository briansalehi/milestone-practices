#include <iostream>
#include <forward_list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::forward_list<int> integers;
    integers.push_front(5);
    integers.push_front(4);
    integers.push_front(3);
    integers.push_front(2);
    integers.push_front(1);
    integers.push_front(0);
    display(integers);

    integers.pop_front();
    display(integers);

    integers.remove(4);
    display(integers);

    integers.clear();
    display(integers);

    if(integers.empty())
        std::cout << "container empty" << std::endl;
    
    return 0;
}
