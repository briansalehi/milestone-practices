#include <iostream>

class Base {
protected: // access specifier
    int member;

public:
    Base(): member(0) {
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived: public Base {
public:
    Derived(){
        std::cout << "Derived Constructor Invoked" << std::endl;
        member = 1;
    }

    int get() {
        return member;
    }
};

int main()
{
    Derived derived;
    // std::cout << "derived member: " << derived.member << std::endl; // inaccessible
    std::cout << "derived member: " << derived.get () << std::endl;

    return 0;
}
