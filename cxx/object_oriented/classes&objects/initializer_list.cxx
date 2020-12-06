#include <iostream>
#include <initializer_list>

void show(const std::initializer_list<int>& values) {
    for (
        std::initializer_list<int>::const_iterator iterator = values.begin();
        iterator != values.end();
        ++iterator)
    {
        std::cout << *iterator;
    }
    std::cout << std::endl;
}

int main()
{
    std::initializer_list<int> numbers = {0,1,2,3,4,5,6,7,8,9};
    show(numbers);

    return 0;
}
