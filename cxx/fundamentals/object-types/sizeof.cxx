#include <iostream>

int main()
{
    int shortNumber = 1000;
    long meduimNumber = 1000000;
    long long largeNumber = 1000000000;

    // size of allocated memory depends on the variable type
    std::cout << sizeof(shortNumber) << std::endl;
    std::cout << sizeof(meduimNumber) << std::endl;
    std::cout << sizeof(largeNumber) << std::endl;

    return 0;
}
