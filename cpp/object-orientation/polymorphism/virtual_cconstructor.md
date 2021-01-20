# 02.03.07 virtual copy constructor

```cxx
#include <iostream>

class Base {
public:
    // virtual copy constructor is impossible, subsequently we simulate it
    virtual Base* clone() = 0;
    virtual void show() = 0;
    virtual ~Base() {};
};

class Derived: public Base {
public:
    Base* clone() override {
        return new Derived(*this);
    }

    void show() override final {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Base* sample = new Derived;
    sample->show();
    delete sample;
    return 0;
}

```

## Output

```txt
Derived Method Invoked
```

## Comments *[not verified]*

Virtual constructors cannot be implemented by using **virtual** keyword.  
But we can simulate it.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.06. prevent overriding by final](./../../02.object_oriented/03.polymorphism/06.final.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04. Operators](./../../02.object_oriented/04.operators/README.md)

</div>
