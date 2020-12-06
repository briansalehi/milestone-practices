#include <iostream>
#include <string>
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
    // there are three ways to insert into a container
    std::list<int> integers;

    // type 1: prepend value to the container
    integers.insert(integers.cbegin(), 2);
    integers.insert(integers.cbegin(), 1);
    display(integers);

    // type 2: insert two 0s at the beginning
    integers.insert(integers.cbegin(), 2, 0);
    display(integers);

    // type 3: copy a container into another
    std::list<int> numbers;
    numbers.insert(numbers.cbegin(), ++integers.cbegin(), integers.cend());
    display(numbers);

    return 0;
}
