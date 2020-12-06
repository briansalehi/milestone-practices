#include <iostream>

int main()
{
    int number = 20;
    std::cout << number << std::endl;
    std::cout.setf(std::ios_base::showbase);
    std::cout << std::hex << number << std::endl;

    return 0;
}
