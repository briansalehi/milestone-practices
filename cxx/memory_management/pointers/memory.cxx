#include <iostream>

int main()
{
    int number = 15;
    int* pointer = nullptr; // pointer declaration
    pointer = &number; // referencing operator & references to the memory of a variable

    /*

    int* wrong; // fails, pointer points to nowhere
    wrong = 12345; // value gets lost, because there's no memory allocated for it in any specific size

    */

    std::cout << "number:\t" << number << std::endl;
    std::cout << "&number:\t" << std::hex << &number << std::endl;
    std::cout << "pointer:\t" << pointer << std::endl;

    // dereference operator * (actual value a pointer points to)
    std::cout << "*pointer: " << std::dec << *pointer << std::endl;
    std::cout << "&pointer:\t" << std::hex << &pointer << std::endl;

    //  size of pointer
    std::cout << "size of number:\t\t" << std::dec << sizeof(number) << std::endl;
    std::cout << "size of pointer:\t" << sizeof(pointer) << std::endl;

    return 0;
}
