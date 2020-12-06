#include <iostream>

void Area(const double* const radius, const double* const pi, double* const area) {
    // check for pointers validity
    if (&radius, &pi, &area) {
        *area = (*pi) * (*radius) * (*radius);
    }
}

int main()
{
    const double pi = 3.14159;
    double radius = 0;
    double area = 0;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    // pass the addresses
    Area(&radius, &pi, &area);

    std::cout << "Area of the circle is: " << area << std::endl;
    return 0;
}
