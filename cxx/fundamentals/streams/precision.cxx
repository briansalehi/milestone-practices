#include <iostream>

int main()
{
    const double pi = 3.1415;
    std::cout << pi << std::endl; // no precision

    std::cout.precision(3);
    std::cout << pi << std::endl;

    return 0;
}
