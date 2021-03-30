#include <iostream>

int main()
{
    double fraction = 2.1;
    int integer;

    std::cout << fraction << std::endl;
    integer = static_cast<int>(fraction);
    std::cout << integer << std::endl;

    return 0;
}
