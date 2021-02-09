#include <iostream>

// recursive function
int Power(int base, int p)
{
    if (p < 2) {
        return base;
    }
    
    return base * Power (base, --p);
}

int main()
{
    int base, exponent;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;
    std::cout << base << " " << exponent << std::endl;
    std::cout << Power(base, exponent) << std::endl;
    return 0;
}
