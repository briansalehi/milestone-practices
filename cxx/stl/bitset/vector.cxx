#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // vector<bool> instantiations
    std::vector<bool> bits;
    std::vector<bool> bitFlags(5, true);
    std::vector<bool> copyBits(bitFlags);

    // vector<bool> operators
    bits.push_back(true);
    bits.push_back(false);
    bits.push_back(false);
    bits.push_back(true);

    std::cout << "vector size: " << bits.size() << std::endl;

    bits.flip();
    std::cout << "fliped the bits: ";
    for_each(
        bits.cbegin()
        , bits.cend()
        , [](const bool& bit) { std::cout << bit; }
    );
    std::cout << std::endl;
    
    return 0;
}
