#include <iostream>
#include <string>

int main()
{
    std::string action("C++ Programming");

    // accessing std::string contents using array (C-Style)
    for (size_t iterator = 0; iterator < action.length(); ++iterator) {
        std::cout << action[iterator];
    }
    std::cout << std::endl;

    // accessing std::string contents using iterator
    for (std::string::const_iterator iterator = action.cbegin();
        iterator != action.cend();
        ++ iterator) {
        std::cout << *iterator;
    }
    std::cout << std::endl;

    // accessing content as a const char*
    std::cout << action.c_str() << std::endl;
    
    return 0;
}
