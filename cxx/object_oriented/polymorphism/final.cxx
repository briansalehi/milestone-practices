#include <iostream>

class Base {
public:
    virtual void method() {
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    // method using final will no longer be available to be overriden by another class
    void method() override final {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method();

    return 0;
}
