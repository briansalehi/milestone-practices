#include <iostream>

int main()
{
    int counter = 0;

    for (int i = 0; i < 10; ++i) {
        ++counter;
    }

    std::cout << counter << std::endl;

    return 0;
}
