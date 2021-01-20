#include <iostream>
#include <bitset>

int main()
{
    unsigned short number = 0b10101010;
    std::bitset<8> bitwiseNot = (~number);

    // bitwise not ~
    std::cout << "~" << (std::bitset<8>) number << ": " << bitwiseNot << std::endl;

    std::bitset<8> bitwiseAnd = (number & 0x0F);
    std::cout << (std::bitset<8>) number << " & 00001111: " << bitwiseAnd << std::endl;

    std::bitset<8> bitwiseOr = (number | 0xF0);
    std::cout << (std::bitset<8>) number << " | 11110000: " << bitwiseOr << std::endl;

    std::bitset<8> bitwiseXor = (number ^ 0xFF);
    std::cout << (std::bitset<8>) number << " ^ 11111111: " << bitwiseXor << std::endl;

    return 0;
}
