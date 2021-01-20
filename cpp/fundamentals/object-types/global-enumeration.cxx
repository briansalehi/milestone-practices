#include <iostream>

enum Colors {red, green, blue};

int main()
{
    int color = (int)red; // red is visible globally
    std::cout << color << std::endl;

    return 0;
}
