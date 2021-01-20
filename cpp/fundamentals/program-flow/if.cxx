#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    // if...else statement
    if (num1 < num2)
        std::cout << num1 << " is lower than " << num2 << std::endl;
    else if (num2 < num1)
        std::cout << num2 << " is lower than " << num1 << std::endl;
    else
        std::cout << num1 << " and " << num2 << " are equal!" << std::endl;

    return 0;
}
