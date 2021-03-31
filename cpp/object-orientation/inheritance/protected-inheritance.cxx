#include <iostream>

class Line {
protected:
    int dimension;

public:
    Line(int size): dimension{size} {}

    int length() {
        return dimension;
    }
};

class Plane: protected Line {
public:
    Plane(int size): Line{size} {}

    int area() {
        return dimension * dimension;
    }
};

class Volume: protected Plane {
public:
    Volume(int size): Plane{size} {}

    int volume() {
        return dimension * dimension * dimension;
    }
};

int main()
{
    Volume cube(2);
    std::cout << "volume of the cube is: " << cube.volume() << std::endl;

    Plane space(2);
    std::cout << "area of the space is: " << space.area() << std::endl;

    Line line(2);
    std::cout << "length of the line is: " << line.length() << std::endl;;

    /*
    std::cout << cube.dimension << std::endl; // inaccessible
    */

    return 0;
}
