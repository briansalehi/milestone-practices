#include <iostream>

// call by reference
void Multiply(int& number)
{
    number *= number;
}

int main()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    Multiply(number);
    std::cout << "result of number x number: " << number << std::endl;

    // referenstd::cing a & b
    // constant references
    const int& reference = number;
    std::cout << "reference of the result: " << reference << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "&result: " << &reference << std::endl;

    return 0;
}
