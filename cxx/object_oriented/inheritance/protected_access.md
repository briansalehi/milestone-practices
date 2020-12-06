# 02.02.02 protected access specifier

```cxx
#include <iostream>

class Base {
protected: // access specifier
    int member;

public:
    Base(): member(0) {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived: public Base {
public:
    Derived(){
        std::cout << "Derived Constructor Invoked" << std::endl;
        member = 1;
    }

    int get() {
        return member;
    }
};

int main()
{
    Derived derived;
    // std::cout << "derived member: " << derived.member << std::endl; // inaccessible
    std::cout << "derived member: " << derived.get () << std::endl;

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

Protected members of *Base* class is accessible within the scope of *Derived* classes, but they are inaccessible outside of inheritance chain, or generation.  
Therefore, to access protected members we have to declare a method returning those members or specify a foreign function as friends with a *Derived* class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.01. public inheritance](./../../02.object_oriented/02.inheritance/01.public.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.03. base class initialization](./../../02.object_oriented/02.inheritance/03.base_initialization.md)

</div>
