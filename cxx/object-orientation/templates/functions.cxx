#include <iostream>
// macro function, parentheses are necessary due to text replacement, e.g. x="3+2"
#define SQUARED(x) ((x) * (x))

int main()
{
    int number = 4;
    std::cout << "square of " << number << " is: " << SQUARED(number) << std::endl;

    return 0;
}
