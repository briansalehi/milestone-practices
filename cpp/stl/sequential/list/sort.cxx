#include <iostream>
#include <list>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++ iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

// inline function of sort
inline bool descending(const int& lhs, const int& rhs) { return (lhs > rhs); }
inline bool ascending(const int& lhs, const int& rhs) { return (lhs < rhs); }

int main()
{
    std::list<int> numbers{5,2,4,1,3};
    std::list<int> integers(numbers);
    display(numbers);

    numbers.sort();
    display(numbers);

    integers.sort(descending);
    display(integers);

    integers.sort(ascending);
    display(integers);

    return 0;
}
