#include <iostream>
#include <string>

int main()
{
    std::string sentence("I'm a programmer, my favorite programming language is Cxx becuase it's a great programming language.");

    // find returns first position of std::string when exists otherwise returns std::string::npos
    size_t position = sentence.find("program", 0);

    // use if condition to find first position of substring
    if (position != std::string::npos) {
        std::cout << "substring found at position: " << position << std::endl;
    }
    std::cout << std::endl;

    // use loop to find substring globally
    while (position != std::string::npos) {
        std::cout << "substring found at position: " << position << std::endl;

        size_t offset = position + 1;
        position = sentence.find("program", offset);
    }

    return 0;
}
