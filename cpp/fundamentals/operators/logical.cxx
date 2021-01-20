#include <iostream>

int main()
{
    bool discount = true;
    bool onsale = true;

    // logical operator and
    if (discount && onsale) {
        std::cout << "this product is on sale and has discount" << std::endl;
    }

    // logical operator or
    if (discount || onsale) {
        std::cout << "this product is either available or has discount" << std::endl;
    }

    // logical operator not
    if (!discount) {
        std::cout << "this product does not have any discount" << std::endl;
    }

    // logical operator xor
    if (discount ^ onsale) {
        std::cout << "this product is on sale or has discount but not both" << std::endl;
    }

    return 0;
    
}
