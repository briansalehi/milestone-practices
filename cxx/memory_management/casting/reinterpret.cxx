#include <iostream>

int main()
{
    struct memory { short high; short low; }; // little-endian order
    int variable;
    int *address = static_cast<int*>(&variable); // store memory address of variable

    memory* word = reinterpret_cast<memory*>(address); // cast memory address

    std::cout << "address: " << &variable << std::endl;
    std::cout << "low byte: " << std::hex << word->low << std::endl;
    std::cout << "high byte: " << std::hex << word->high << std::endl;

    return 0;
}
