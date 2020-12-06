#include <iostream>

int main()
{
    std::cout << true << std::endl; // no flag is set
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl; // flag has set

    return 0;
}
