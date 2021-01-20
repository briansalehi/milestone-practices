# 02.03.06 prevent overriding by final

```cxx
#include <iostream>

class Base {
public:
    virtual void method() {
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    // method using final will no longer be available to be overriden by another class
    void method() override final {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method();

    return 0;
}

```

## Output

```txt
Derived Method Invoked
```

## Comments *[not verified]*

You were previously introduced to **final** keyword in inheriting classes, which made that class to be the last generation in hierarchy.  
Here we can also use **final** keyword to prevent a method from being overriden by another class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.05. intention to override](./../../02.object_oriented/03.polymorphism/05.override.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.07. virtual copy constructor](./../../02.object_oriented/03.polymorphism/07.virtual_cconstructor.md)

</div>
