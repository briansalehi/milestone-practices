#include <iostream>

class Base {
public:
    int member;

    Base(): member{0} {
        std::cout << "Base Constructor Invoked" << std::endl;
        std::cout << "base member: " << member << std::endl;
    }
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived Constructor Invoked" << std::endl;
        member = 1;
        std::cout << "derived member: " << member << std::endl;
    }
};

int main()
{
    Derived derived;

    return 0;
}
