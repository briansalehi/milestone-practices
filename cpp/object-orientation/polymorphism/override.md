# 02.03.05 intention to override

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
    // override makes sure method will override
    void method() override {
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

You were previously introduced to overriding functions.  
We can use **override** keyword on overriding methods to be 100 percent sure they will be overriden.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.04. diamond problem](./../../02.object_oriented/03.polymorphism/04.diamond.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.06. prevent overriding by final](./../../02.object_oriented/03.polymorphism/06.final.md)

</div>
