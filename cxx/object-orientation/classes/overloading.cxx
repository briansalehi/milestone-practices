#include <iostream>

class Circle {
private:
    const double pi = 3.14159;
    double radius;

public:
    Circle() {
        std::cout << "constructing circle" << std::endl;
        radius = 0;
    }

    // overloaded constructor
    Circle(double length) {
        std::cout << "overloading circle constructor" << std::endl;
        radius = length;
    }

    void SetRadius(double length) {
        std::cout << "setting radius to " << length << std::endl;
        radius = length;
    }

    void Area() {
        double area = pi * radius * radius;
        std::cout << "area of the circle is: " << area << std::endl;
    }

    void Perimeter() {
        double perimeter = 2 * pi * radius;
        std::cout << "perimeter of the circle is: " << perimeter << std::endl;
    }
};

int main()
{
    Circle ring1;
    ring1.Area();
    ring1.Perimeter();

    ring1.SetRadius(1);
    ring1.Area();
    ring1.Perimeter();

    Circle* ring2 = new Circle(3);
    ring2->Area();
    ring2->Perimeter();
    delete ring2;

    return 0;
}
