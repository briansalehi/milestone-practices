#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived final: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
    }
};

/*

class NotHappening: public Derived {
public:
    NotHappening() {
        std::cout << "Cannot exist" << std::endl;
    }
};

*/

int main()
{
    // Derived class itself can not be derived anymore
    Derived derived;
    
    return 0;
}
