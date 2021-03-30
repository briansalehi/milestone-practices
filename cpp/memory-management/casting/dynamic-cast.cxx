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
void match(object_t &object) {
    try {
        Derived &derived_pointer = dynamic_cast<Derived &>(object);
        derived_pointer.display();
    } catch(std::bad_cast &exp) {
        std::cout << exp.what() << std::endl;
    }
}

int main()
{
    // using pointer
    Base *base_object = new Base;
    Derived *derived_object = new Derived;
    Bottom *bottom_object = new Bottom;

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
