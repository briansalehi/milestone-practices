#include <iostream>

int main()
{
    int bigger = 95;
    int smaller = 30;

    // equality
    if (smaller == bigger) {
        std::cout << smaller << " euqlas to " << bigger << std::endl;
    }

    // inequality
    if (smaller != bigger) {
        std::cout << "two numbers are not equal!" << std::endl;
    }

    // bigger than
    if (bigger > smaller) {
        std::cout << "bigger number is " << bigger << std::endl;
    }

    // smaller that
    if (smaller < bigger) {
        std::cout << "smaller number is " << smaller << std::endl;
    }

    return 0;
}
