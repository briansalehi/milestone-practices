# 02.02.07 protected inheritance

```cxx
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

```

## Output

```txt
volume of the cube is: 8
area of the space is: 4
length of the line is: 2
```

## Comments *[not verified]*

all public members and methods of base classes are visible to derived classes in **protected** inheritance, but not outside of inheritance chain.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.06. private inheritance](./../../02.object_oriented/02.inheritance/06.private.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.08. slicing derived classes](./../../02.object_oriented/02.inheritance/08.slicing.md)

</div>
