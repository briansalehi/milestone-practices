#include <iostream>

class Base
{
protected:
    int member;

public:
    // overloaded constructor forces derived classes to initialize base
    Base(int init): member{init}
	{
        std::cout << "Base Constructor Invoked" << std::endl;
    }
};

class Derived: public Base
{
public:
    // initialize default constructor of base class
    Derived(): Base{1}
	{
        std::cout << "Derived Constructor Invoked" << std::endl;
    }

    int get()
	{
        return member;
    }
};

int main()
{
    /*
        derived class don't touch base member
        so it would be a good practice to set base member
        as private in security point of view
    */
    Derived derived;
    std::cout << "derived member: " << derived.get() << std::endl;

    return 0;
}
