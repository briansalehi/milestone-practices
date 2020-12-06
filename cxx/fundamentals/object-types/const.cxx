/*
Constants in C++:

=>  literal constants, such as literal strings
=>  declared by const keyword
    constant expression using constexpr keyword (C++11)
    emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>

// before making a variable constant, make sure you won't have to modify it in future
const float pi = 3.1415; // constant variable

int main()
{
    // this string is a literal constant
    std::cout << "Enter circle's radius: ";
    double radius;
    std::cin >> radius;

    double circumference = 2 * pi * radius;
    std::cout << "circle's circumference is = " << circumference << std::endl;

    return 0;
}
