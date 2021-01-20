#include <iostream>

int main()
{
    char answer = 'n';
__global:
    std::cout << "using goto statement is poor programming" << std::endl;
    std::cout << "would you like to still use it? (y/n)";
    std::cin >> answer;
    std::cout << std::endl;

    // goto statement, do not use goto, it's poor programming
    if (answer == 'y') {
        goto __global;
        std::cout << "good choice!" << std::endl;
    }

    return 0;
}
