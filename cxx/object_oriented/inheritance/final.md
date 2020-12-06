# 02.02.10 final inheritance

```cxx
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived final: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }
};

/*

class NotHappening: public Derived {
public:
    NotHappening() {
        std::cout << "Cannot exist" << std::endl;
    }
};

*/

int main()
{
    // Derived class itself can not be derived anymore
    Derived derived;
    
    return 0;
}

```

## Output

```txt
Base Constructor Invoked
Derived Constructor Invoked
```

## Comments *[not verified]*

Using **final** keyword, we can prevent a class from being derived again.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.09. multiple inheritance](./../../02.object_oriented/02.inheritance/09.multiple.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03. Polymorphism](./../../02.object_oriented/03.polymorphism/README.md)

</div>
