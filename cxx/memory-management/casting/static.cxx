#include <iostream>

int main()
{
    int integer = 2;
    double number;

    std::cout << integer << std::endl;
    number = static_cast<double>(integer);
    std::cout << number << std::endl;

    return 0;
}
