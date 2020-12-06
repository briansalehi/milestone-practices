#include <iostream>

int main()
{
    // options required to make floating points not truncated
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float pi = 3.141592;
    std::cout << pi << std::endl;
    double number = 6;
    std::cout << number << std::endl;

    return 0;
}
