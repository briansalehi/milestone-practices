#include <iostream>

class Base
{
public:
    Base()
	{
        std::cout << "Base Constructor Invoked" << std::endl;
    }
    
    virtual ~Base()
	{
        std::cout << "Base Destructor Invoked" << std::endl;
    }
};

class Derived: public Base
{
public:
    Derived()
	{
        std::cout << "Derived Constructor Invoked" << std::endl;
    }

    // derived destructor won't be invoked when base destructor is not virtual
    ~Derived()
	{
        std::cout << "Derived Destructor Invoked" << std::endl;
    }
};

void eraser(Base* object)
{
    if (object) {
        delete object;
    }
}

int main()
{
    Derived* object = new Derived;
    eraser(object);

    return 0;
}
