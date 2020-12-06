#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: "; // output stream
    std::cin >> name; // input stream
    std::cout << std::endl; // newline in output stream
    std::cout << "your name is: " << name;
    std::cout << "\n"; // C style newline

    return 0;
}
