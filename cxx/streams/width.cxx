#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string sentence("I Love C++ Programming");
    std::cout << sentence << std::endl;

    std::cout << std::setw(30); // only works for next std::cout
    std::cout << sentence << std::endl;

    std::cout << std::setw(30) << std::setfill('*'); // fill width by *
    std::cout << sentence << std::endl;

    std::cout << sentence << std::endl; // back to normal

    return 0;
}
