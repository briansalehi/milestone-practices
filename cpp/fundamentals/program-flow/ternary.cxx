#include <iostream>

int main()
{
    int num1 = 1, num2 = 2;

    // ternary operator
    int biggest = (num1 > num2) ? num1 : num2;

    std::cout << biggest << std::endl;

    return 0;
}
