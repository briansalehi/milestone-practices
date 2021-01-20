#include <iostream>

int main()
{
    // store ios_base flags for future use
    std::ios_base::fmtflags flags = std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl; // ios_base flags unset
    std::cout.setf(flags);
    std::cout << true << std::endl; // ios_base flags set

    // store precision value for future use
    std::streamsize length = std::cout.precision(2);
    std::cout << 1 << std::endl; // precision unset
    std::cout.precision(length);
    std::cout << 1 << std::endl; // precision set

    return 0;
}
