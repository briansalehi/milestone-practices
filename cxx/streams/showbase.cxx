#include <iostream>

int main()
{
    std::ios_base::fmtflags base = std::ios_base::showbase;
    std::cout << std::hex << 0x1f << std::endl;
    std::cout.setf(base);
    std::cout << std::hex << 0x1f << std::endl;

    return 0;
}
