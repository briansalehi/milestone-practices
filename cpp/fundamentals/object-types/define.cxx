/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
    constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
 => defined constants, depricated
*/

#include <iostream>

#define PI 3.14159

int main()
{
    // string replacement, not smart preprocessing
    std::cout << "Pi number: " << PI << std::endl;

    return 0;
}
