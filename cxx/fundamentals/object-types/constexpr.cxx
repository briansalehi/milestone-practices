/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
=>  constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>
#include <cmath>

constexpr double pi() { return 355.0 / 113; }

// constexpr can consume another constexpr as well
constexpr double tau() { return 2.0 * pi(); }

int main()
{
    std::cout << "pi number equals to " << pi() << std::endl;
    std::cout << "tau number equals to 2 pi: " << tau() << std::endl;
    std::cout << "pi constant is also presumed in most C++ compilers: " << M_PI << std::endl;

    return 0;
}
