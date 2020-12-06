# 02.01.04 overloading constructors

```cxx
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

```

## Output

```txt
constructing circle
area of the circle is: 0
perimeter of the circle is: 0
setting radius to 1
area of the circle is: 3.14159
perimeter of the circle is: 6.28318
overloading circle constructor
area of the circle is: 28.2743
perimeter of the circle is: 18.8495
```

## Comments *[not verified]*

Constructors too, can be overloaded.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.03. constructor](./../../02.object_oriented/01.classes&objects/03.constructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.05. default parameters](./../../02.object_oriented/01.classes&objects/05.defaults.md)

</div>
