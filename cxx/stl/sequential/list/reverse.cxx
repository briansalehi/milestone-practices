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
    std::list<int> numbers{1,2,3,4,5};
    display(numbers);

    // reverse does not take any parameter(this is different than std::reverse)
    numbers.reverse();
    display(numbers);

    return 0;
}
