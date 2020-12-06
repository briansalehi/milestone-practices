#include <iostream>

const double pi = 3.1415;

void Area(double r = 1) {
    double area = pi*r*r;
    std::cout << area << std::endl;
}

int main()
{
    Area();

    return 0;
}
