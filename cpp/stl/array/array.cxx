#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> numbers = {1,2,3,4,5};
    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}
