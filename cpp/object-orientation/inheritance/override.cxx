#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor Invoked" << std::endl;
    }

    // overriden get, there's a similar get in derived class that hides this get
    void get() {
        std::cout << "Base Class Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }

    // overrides base get
    void get() {
        std::cout << "Derived Class Method Invoked" << std::endl;

        // I. scope resolution operator to invoke overriden method from derived scope
        Base::get();
    }
};

int main()
{
    Derived derived;
    derived.get();

    // II. scope resolution operator to invoke overriden method from derived object
    derived.Base::get();
    
    return 0;
}
