#include <algorithm>
#include <iostream>
#include <string>
#include <list>

void display(const std::list<int>& container) {
    for (std::list<int>::const_iterator iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> numbers;
    numbers.resize(10);
    display(numbers);

    fill(numbers.begin(), numbers.end(), 9);
    display(numbers);

    fill_n(numbers.begin(), 5, 1);
    display(numbers);

    return 0;
}
