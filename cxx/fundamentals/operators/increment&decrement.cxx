#include <iostream>

int main()
{
    int first = 10;
    std::cout << "first number: " << first << std::endl;

    // postfix increment operator, first assign r-value to l-value then increment r-value
    int second = first ++;
    std::cout << "first number after increment: " << first;
    std::cout << " and second: " << second << std::endl;

    // reset value
    first = 10;
    std::cout << "first number: " << first << std::endl;

    // prefix increment operator, first increment r-value then assign it to l-value
    second  = ++ first;
    std::cout << "first number after incremented: " << first;
    std::cout << " and second: " << second << std::endl;

    return 0;
}
