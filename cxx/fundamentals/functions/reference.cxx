#include <iostream>

const double pi = 3.14159;

// don't return area, change the value of variable itself in the argument!
void Area(double radius, double &area) {
    area = pi*radius*radius;
}

int main()
{
    double radius = 2, area = 0;
    std::cout << "enter radius: ";
    std::cin >> radius;
    std::cout << radius << std::endl;

    Area(radius, area);
    std::cout << area << std::endl;

    return 0;
}
