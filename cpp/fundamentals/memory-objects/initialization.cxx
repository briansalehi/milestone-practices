#include <iostream>

int main()
{
    const double constant_fraction = 3.141592;

    int number = constant_fraction; // narrowing

	double pi{constant_fraction}; // direct list initialization
    pi = {constant_fraction}; // copy list initialization

    std::cout << number << std::endl;
    std::cout << pi << std::endl;

    return 0;
}
