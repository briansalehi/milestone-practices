#include <iostream>

int main()
{
    std::cout << true << std::endl;
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl;

    return 0;
}
