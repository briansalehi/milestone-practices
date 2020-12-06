#include <iostream>

class Base {
public:
    virtual void method() {
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    // override makes sure method will override
    void method() override {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method();

    return 0;
}
