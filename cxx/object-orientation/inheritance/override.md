# 02.02.04 overriding methods

```cxx
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor Invoked" << std::endl;
    }

    // overriden get, there's a similar get in derived class that hides this get
    void get() {
        std::cout << "Base Class Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }

    // overrides base get
    void get() {
        std::cout << "Derived Class Method Invoked" << std::endl;

        // I. scope resolution operator to invoke overriden method from derived scope
        Base::get();
    }
};

int main()
{
    Derived derived;
    derived.get();

    // II. scope resolution operator to invoke overriden method from derived object
    derived.Base::get();
    
    return 0;
}

```

## Output

```txt
Base Constructor Invoked
Derived Constructor Invoked
Derived Class Method Invoked
Base Class Method Invoked
Base Class Method Invoked
```

## Comments *[not verified]*

When methods of *Base* class and *Derived* class have the same name, the derived method will override the base method.  
To specifically invoke the overriden method of base class, you can use resolution operator :: to access that method.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.03. base class initialization](./../../02.object_oriented/02.inheritance/03.base_initialization.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.05. order of constructors and destructors](./../../02.object_oriented/02.inheritance/05.ordering.md)

</div>
