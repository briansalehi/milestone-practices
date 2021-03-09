#include <iostream>

int main()
{
    const double pi = 3.14;
    std::cout << pi << std::endl;
    std::cout.setf(std::ios_base::showpoint);
    std::cout << pi << std::endl;

    return 0;
}
