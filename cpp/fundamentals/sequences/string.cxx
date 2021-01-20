#include <iostream>
#include <string>

int main()
{
    // read a string
    std::string message("this will be printed on your screen!");
    std::cout << message << std::endl;

    // write in string
    std::string input;
    getline(std::cin, input);
    std::cout << input << std::endl;

    return 0;
}
