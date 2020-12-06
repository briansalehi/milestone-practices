# 02.02.09 multiple inheritance

```cxx
#include <iostream>

class Alpha {
public:
    Alpha(int init): member{init} {}

    void display() {
        std::cout << "Alpha Method Invoked" << std::endl;
    }

    int get() {
        return member;
    }

private:
    int member;
};

class Beta {
public:
    Beta(int init): member{init} {}

    void display() {
        std::cout << "Beta Method Invoked" << std::endl;
    }

    int get() {
        return member;
    }

private:
    int member;
};

class Compound: public Alpha, public Beta {
public:
    Compound(): Alpha{10}, Beta{20} {
        member = Alpha::get() + Beta::get();
    }

    void display() {
        std::cout << "Beta Method Invoked" << std::endl;
        std::cout << "alpha: " << Alpha::get() << std::endl;
        std::cout << "beta: " << Beta::get() << std::endl;
        std::cout << "compund: " << member << std::endl;
    }

private:
    int member;
};

int main()
{
    Compound object;
    object.display();

    return 0;
}

```

## Output

```txt
Beta Method Invoked
alpha: 10
beta: 20
compund: 30
```

## Comments *[not verified]*

A class can inherit from multiple classes. all of public members and methods in base classes are accessible to the derived class as usual.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.08. slicing derived classes](./../../02.object_oriented/02.inheritance/08.slicing.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.10. final inheritance](./../../02.object_oriented/02.inheritance/10.final.md)

</div>
