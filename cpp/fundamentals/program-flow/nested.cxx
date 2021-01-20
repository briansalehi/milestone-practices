#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Enter dividend and divisor: ";
    std::cin >> num1 >> num2;

    // nested conditioning
    if (num1 > num2) {
        if (num2 != 0) {
            std::cout << (num1 / num2) << std::endl;
        }
        else {
            std::cout << "devide by 0 is illegal" << std::endl;
        }
    }
    else {
        std::cout << "first number should be bigger to make integer" << std::endl;
    }

    return 0;
}
