#include <iostream> // std::cout, std::endl, std::getline, std::cin
#include <string> // std::string
#include <cstring> // strcpy

int main()
{
    std::string sentence;

    std::cout << "type a sentence: ";
    std::getline(std::cin, sentence);

    // always check std::string boundaries before copying it to C-style strings
    char array[20] = {0};
    if (sentence.length() < 20) {
        strcpy(array, sentence.c_str());
        std::cout << array << std::endl;
    }
    else
        std::cout << "you have crossed the boundary" << std::endl;


    return 0;
}
