# 02.02.08 slicing derived classes

```cxx
#include <iostream>

class Base {
public:
    void method() {
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    void another_method() {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

void display(Base sliced) {
    sliced.method();
    /*
    sliced.another_method(); // Derived was sliced and lost another_method
    */
}

int main()
{
    Derived sample;
    display(sample);
    
    return 0;
}

```

## Output

```txt
Base Method Invoked
```

## Comments *[not verified]*

Derived classes can have methods than *Base* classes do not have, therefore, when you pass an object of derived class to an argument of base class type, derived class is said to be sliced, meaning that it lost the methods that are not mutual to the base class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.07. protected inheritance](./../../02.object_oriented/02.inheritance/07.protected.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.09. multiple inheritance](./../../02.object_oriented/02.inheritance/09.multiple.md)

</div>
