#include <iostream>

int main()
{
    // don't forget to initialize array
    const size_t length = 100;
    int array[length] = {0};

    std::cout << "sizeof array: " << sizeof(array) << std::endl;
    std::cout << "sizeof first element: " << sizeof(array[0]) << std::endl;
    std::cout << "sizeof array is also equal to sizeof first element by length of array: ";
    std::cout << sizeof(array[0]) * length << std::endl;

    return 0;
}
