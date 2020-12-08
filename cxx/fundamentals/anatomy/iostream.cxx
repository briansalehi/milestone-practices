#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: "; // output stream

    std::string name;
    std::cin >> name; // input stream
    std::cout << std::endl; // flush output stream

    std::cout << "your name is: " << name << "\n"; // C style newline

    return 0;
}
