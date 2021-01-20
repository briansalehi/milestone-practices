# 02.03.02 virtual destructors

```cxx
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
    
    virtual ~Base() {
        std::cout << "Base Destructor Invoked" << std::endl;
    }
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }
    // derived destructor won't be invoked when base destructor is not virtual
    ~Derived() {
        std::cout << "Derived Destructor Invoked" << std::endl;
    }
};

void eraser(Base* object) {
    if (object) {
        delete object;
    }
}

int main()
{
    Derived* object = new Derived;
    eraser(object);

    return 0;
}

```

## Output

```txt
Base Constructor Invoked
Derived Constructor Invoked
Derived Destructor Invoked
Base Destructor Invoked
```

## Comments *[not verified]*

When creating an instance of an object with **new** operator,
derived class's destructor will no be invoked when base classes destructor is not virtual.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.01. virtual method](./../../02.object_oriented/03.polymorphism/01.virtual.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.03. pure virtual function](./../../02.object_oriented/03.polymorphism/03.pure.md)

</div>
