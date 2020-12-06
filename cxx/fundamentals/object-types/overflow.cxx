#include <iostream>

int main()
{
    unsigned short unsignedNumber = 0xffff;
    short signedNumber = 0x7fff; // short is abbreviation of signed short
    std::cout << std::hex; // will be discussed later

    // overflow occured as the result equals to: 0
    std::cout << "unsigned short 0x" << unsignedNumber << " + 1 equals: 0x";
    std::cout << ++unsignedNumber << std::endl;

    // overflow occured as the result equals to: -0x8000
    std::cout << "signed short 0x" << signedNumber << " + 1 equals: 0x";
    std::cout << ++signedNumber << std::endl;

    return 0;
}
