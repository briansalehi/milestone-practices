# 02.02.06 private inheritance

```cxx
#include <iostream>

class Engine {
public:
    void ignite(bool state) {
        if (state) {
            std::cout << "Firing up the engine" << std::endl;
        }
        else {
            std::cout << "Shutting down the engine" << std::endl;
        }
    }
};

class Car: private Engine {
public:
    void move() {
        ignite(true);
    }
};

int main()
{
    Car lemo;
    lemo.move();
    /*
    lemo.ignite(true); // inaccessible
    */

    return 0;
}

```

## Output

```txt
Firing up the engine
```

## Comments *[not verified]*

When *Derived* class inherits from *Base* class privately, all of the public members and methods of *Base* class are only accessibly to the *Derived* class and not only the next generations of *Derived* class.  
Don't forget that private members of Base class will stay private to anyone even *Derived* class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.05. order of constructors and destructors](./../../02.object_oriented/02.inheritance/05.ordering.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.07. protected inheritance](./../../02.object_oriented/02.inheritance/07.protected.md)

</div>
