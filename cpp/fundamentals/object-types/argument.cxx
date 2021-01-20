#include <iostream>

// multiple input arguments
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    // passing multiple parameters to function
    std::cout << multiply(4,5) << std::endl;

    return 0;
}
