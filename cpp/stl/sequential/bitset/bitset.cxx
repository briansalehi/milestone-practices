#include <iostream>
#include <bitset>

int main()
{
    // different bitset instantiating
    std::bitset<4> rawBits;
    std::bitset<4> stringBits("0011");
    std::bitset<4> binaryBits(0b1001);
    std::bitset<4> decimalBits(255); // C++14
    std::bitset<4> copyBits(binaryBits);

    // bitset operators
    // "1101" >> rawBits; // string literal insertion
    std::cout << "bits:\t" << stringBits << " " << binaryBits << std::endl; // output stream
    std::cout << "and:\t" << (binaryBits & stringBits) << std::endl; // binary and
    std::cout << "or:\t" << (binaryBits | stringBits) << std::endl; // binary or
    std::cout << "xor:\t" << (binaryBits ^ stringBits) << std::endl; // binary xor
    std::cout << "not:\t" << (~stringBits) << std::endl; // binary not
    std::cout << "left shift:\t" << (stringBits << 2) << std::endl; // 2 shifts to left (Bx4)
    std::cout << "right shift:\t" << (stringBits >> 1) << std::endl; // a shift to right (B/2)
    std::cout << "bit[2]:\t" << stringBits[1] << std::endl; // second bit by subscript operator

    // bitset member methods
    std::cout << "set operator:\t" << rawBits.set() << std::endl; // set to 1111
    std::cout << "set(1):\t" << binaryBits.set(1) << std::endl; // set 2nd bit to 1 (1001 to 1011)
    std::cout << "reset operator:\t" << rawBits.reset() << std::endl; // reset to 0000
    std::cout << "reset(1):\t" << binaryBits.reset(1) << std::endl; // reset 2nd bit to 0 (1011 to 1001)
    std::cout << "flip operator:\t" << stringBits.flip() << std::endl; // flip (0011 to 1100)
    std::cout << "size operator:\t" << stringBits.size() << std::endl; // size (4)
    std::cout << "count 1s operator:\t" << stringBits.count() << std::endl; // count, number of set bits
    std::cout << "count 0s operator:\t" << (stringBits.size() - stringBits.count()) << std::endl; // count, number of 0 bits
    
    return 0;
}
