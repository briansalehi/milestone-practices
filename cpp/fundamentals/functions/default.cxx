#include <iostream>

const double pi = 3.1415;

void circleArea(double radius = 1) {
    double area = pi*radius*radius;
    std::cout << "Radius: " << radius << ", Area: " << area << std::endl;
}

int main()
{
    circleArea(); // radius = 1
    circleArea(2); // radius = 2
    return 0;
}
