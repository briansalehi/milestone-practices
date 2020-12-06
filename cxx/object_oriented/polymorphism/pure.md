# 02.03.03 pure virtual function

```cxx
#include <iostream>

class Base {
public:
    virtual void show() = 0;
};

class Derived: public Base {
public:
    // derived method must be implemented due to pure virtual function of base class
    void show() {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Derived object;
    object.show();
    return 0;
}

```

## Output

```txt
Derived Method Invoked
```

## Comments *[not verified]*

**pure virtual functions** are the virtual methods in a base class that are only declared and assigned to 0. That is, they are only declared, and not implemented.  
This way, when inheriting that class, virtual methods must be implemented again, otherwise compiler throws an error.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.02. virtual destructors](./../../02.object_oriented/03.polymorphism/02.virtual_destructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.04. diamond problem](./../../02.object_oriented/03.polymorphism/04.diamond.md)

</div>
