#include <iostream>

class Base {
public:
    virtual void show() = 0;
};

class Derived: public Base {
public:
    // derived method must be implemented due to pure virtual function of base class
    void show() {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Derived object;
    object.show();
    return 0;
}
