#include <iostream>

int main()
{
    int numbers[10];

    for (int index = 0; index < 10; ++index) {
        numbers[index] = index;
    }

    // name of the array, points to the address of first element not the whole array
    std::cout << numbers << std::endl; // points to &numbers[0]
    std::cout << &numbers[0] << std::endl;

    // dereferenced array name, points to the address of whole array
    std::cout << &numbers << std::endl; // points to (*numbers)[0]

    // so arrays can be copied this way too
    int (*copy)[10] = &numbers;
    std::cout << copy[0] << std::endl;

    return 0;
}
