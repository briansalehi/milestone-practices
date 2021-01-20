#include <iostream>

class Base {
public:
    void method() {
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

class Derived: public Base {
public:
    void another_method() {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

void display(Base sliced) {
    sliced.method();
    /*
    sliced.another_method(); // Derived was sliced and lost another_method
    */
}

int main()
{
    Derived sample;
    display(sample);
    
    return 0;
}
