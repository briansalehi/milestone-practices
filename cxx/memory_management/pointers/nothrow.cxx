#include <iostream>

int main()
{
    int* memory = new(std::nothrow) int[0xffff]; // not working anyway!? anything wrong with std::nothrow?
    
    if (memory) {
        delete [] memory;
    }
    else {
        std::cout << "memory allocation failed" << std::endl;
    }

    return 0;
}
