#include <iostream>

int main()
{
    const int static_length = 10;
    int dynamic_length = 5;
    double constant_fraction = 3.141592;

    int number1{static_length};
    int number2{dynamic_length};
    double pi = {constant_fraction};

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << pi << std::endl;

    return 0;
}
