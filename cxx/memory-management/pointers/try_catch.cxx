#include <iostream>
#include <exception>

int main()
{
    try {
        long int amount;
        std::cout << "Enter the amount of memory to be allocated: ";
        std::cin >> amount;
        int* const memory = new int[amount];
        delete [] memory;
    }
    catch(std::exception& exp) {
        std::cout << exp.what() << std::endl;
    }

    return 0;
}
