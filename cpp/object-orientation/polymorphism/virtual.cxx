#include <iostream>

class Base {
public:
    // virtual base method
    virtual void show() {
        std::cout << "Base Method Invoked" << std::endl;
    }
};

class Derived1: public Base {
public:
    void show() {
        std::cout << "Derived1 Method Invoked" << std::endl;
    }
};

class Derived2: public Base {
public:
    void show() {
        std::cout << "Derived2 Method Invoked" << std::endl;
    }
};

int main()
{
    Derived1 one;
    Derived2 two;

    one.show();
    two.show();

    return 0;
}
