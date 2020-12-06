# 02.05.02 dynamic casting

```cxx
#include <iostream>
#include <typeinfo>

struct Base {
    Base() {};
    virtual void intro() { std::cout << "this is base class\n"; }
};

struct Derived: public Base {
    Derived() {};
    void intro() { std::cout << "this is derived class\n"; }
    virtual void display() { std::cout << "this function is in derived\n"; }
};

struct Bottom: public Derived {
    Bottom() {};
    void intro() { std::cout << "this is bottom class\n"; }
    void display() { std::cout << "this function is in bottom\n"; }
    void show() { std::cout << "this function is only in bottom\n"; }
};

template <typename object_t>
void match(object_t*  object) {
    Derived* derived_pointer;

    if ((derived_pointer = dynamic_cast<Derived*>(object))) {
        derived_pointer->display();
    }
    else {
        std::cout << "dynamic cast failed\n";
    }
}

template <typename object_t>
void match(object_t& object) {
    try {
        Derived& derived_pointer = dynamic_cast<Derived&>(object);
        derived_pointer.display();
    }
    catch(std::bad_cast& exp) {
        std::cout << exp.what() << std::endl;
    }
}

int main()
{
    // using pointer
    Base* base_object = new Base;
    Derived* derived_object = new Derived;
    Bottom* bottom_object = new Bottom;

    match(base_object);
    match(derived_object);
    match(bottom_object);

    // using reference
    Base base;
    Derived derived;
    Bottom bottom;

    match(base);
    match(derived);
    match(bottom);

    return 0;
}

```

## Output

```txt
dynamic cast failed
this function is in derived
this function is in bottom
std::bad_cast
this function is in derived
this function is in bottom
```

## Comments *[not verified]*

When you have a pointer to an object of type _A_, and you need to know
if you can assign an object's address of another type, say _B_, to that pointer,
you can check their compatibility by **dynamic_cast** operator.

This operator will return a null pointer if objects are not compatible.

Note that only classes containing virtual functions can be used in dynamic_cast operator,
as they are the only reason that two inherited objects might not match.

References can also be used, but virtual_cast operator will not return null pointer in that case,
instead, it will throw a type **bad_cast** exception when two object types don't match.

**bad_cast** class is derived from exception class and is defined in **typeinfo** header file.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.05.01. static casting](./../../02.object_oriented/05.casting/01.static.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.05.03. reinterpret casting](./../../02.object_oriented/05.casting/03.reinterpret.md)

</div>
