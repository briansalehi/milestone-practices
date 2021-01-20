# 02.02.03 base class initialization

```cxx
#include <iostream>

class Base {
protected:
    int member;

public:
    // overloaded constructor forces derived classes to initialize base
    Base(int init): member{init} {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived: public Base {
public:
    // initialize default constructor of base class
    Derived(): Base{1} {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }

    int get() {
        return member;
    }
};

int main()
{
    /*
        derived class don't touch base member
        so it would be a good practice to set base member
        as private in security point of view
    */
    Derived derived;
    std::cout << "derived member: " << derived.get() << std::endl;

    return 0;
}

```

## Output

```txt
Base Constructor Invoked
Derived Constructor Invoked
derived member: 1
```

## Comments *[not verified]*

Notice how we did initialize *Base* class in *Derived* constructor's initialization list.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.02. protected access specifier](./../../02.object_oriented/02.inheritance/02.protected_access.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.04. overriding methods](./../../02.object_oriented/02.inheritance/04.override.md)

</div>
