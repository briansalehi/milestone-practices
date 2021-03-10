#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> bits; // initializing with default constructor
    std::vector<bool> bitFlags(5, true); // initializing 5 set bits
    std::vector<bool> copyBits(bitFlags); // initializing by copy constructor

    // dynamically resizing bitset
    bits.push_back(true);
    bits.push_back(false);
    bits.push_back(false);
    bits.push_back(true);

    std::cout << "vector size: " << bits.size() << std::endl;

    bits.flip(); // similar to not operation on all bits
    std::cout << "fliped the bits: ";
    for_each(bits.cbegin(), bits.cend(), [](const bool& bit) { std::cout << bit; });
    std::cout << std::endl;
    
    return 0;
}
