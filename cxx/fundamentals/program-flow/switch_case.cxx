#include <iostream>

int main()
{
    enum traffic_light {
        red = 1,
        yellow,
        green
    };

    int input;
    std::cout << "Enter a number between 1-3 : ";
    std::cin >> input;

    switch (input) {
        case red:
            std::cout << "light is red" << std::endl;
            break;
        case yellow:
            std::cout << "light is yellow" << std::endl;
            break;
        case green:
            std::cout << "light is green" << std::endl;
            break;
        default:
            std::cout << "your input is not in valid range!" << std::endl;
    }

    return 0;
}
