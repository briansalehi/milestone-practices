# 02.02.01 public inheritance

```cxx
#include <iostream>

class Base {
public:
    int member;

    Base(): member{0} {
        std::cout << "Base Constructor Invoked" << std::endl;
        std::cout << "base member: " << member << std::endl;
    }
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
        member = 1;
        std::cout << "derived member: " << member << std::endl;
    }
};

int main()
{
    Derived derived;

    return 0;
}

```

## Output

```txt
Base Constructor Invoked
base member: 0
Derived Constructor Invoked
derived member: 1
```

## Comments *[not verified]*

Inheritance moves all public methods and members of *Base* class into *Derived* class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02. Inheritance](./../../02.object_oriented/02.inheritance/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.02. protected access specifier](./../../02.object_oriented/02.inheritance/02.protected_access.md)

</div>
