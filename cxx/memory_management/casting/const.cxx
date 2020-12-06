#include <iostream>

void increment(const int *constant)
{
    int* pointer = const_cast<int *>(constant);
    (*pointer)++; // changes the value using a pointer to its memory address
}

int main()
{
    const int unmodifiable = 1;
    int modifiable = 1;
    std::cout << "unmodifiable initial value:" << unmodifiable << std::endl;
    std::cout << "modifiable initial value:" << modifiable << std::endl;

    increment(&unmodifiable);
    increment(&modifiable);
    std::cout << "unmodifiable final value:" << unmodifiable << std::endl;
    std::cout << "modifiable final value:" << modifiable << std::endl;

    return 0;
}
