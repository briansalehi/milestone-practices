#include <iostream>
#include <string>

int main()
{
    std::string phone = "+10123456789";
    std::cout.fill('*');

    std::cout << "A verification code has been sent to ";
    std::cout.width(7);
    // loops and iterators will be discussed later
    for (std::string::const_iterator iterator = phone.cend()-3; iterator != phone.cend(); ++iterator) {
        std::cout << *iterator;
    }
    std::cout << std::endl;

    return 0;
}
