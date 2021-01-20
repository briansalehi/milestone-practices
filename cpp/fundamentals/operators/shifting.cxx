#include <iostream>

int main()
{
    int number = 4;

    std::cout << "number: " << number << std::endl;
    std::cout << "right shift: " << (number >> 1) << std::endl;
    std::cout << "two left shifts: " << (number << 1) << std::endl;

    return 0;
}
