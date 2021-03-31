#include <iostream>

struct Base
{
    virtual void DoSomething()
	{
        std::cout << "Base Method Invoked" << std::endl;
    }    
};

struct Derived: public Base
{
    virtual void DoSomething()
	{
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

void callByValue(Base sliced)
{
    sliced.DoSomething(); // Derived was sliced
}

void callByReference(Base& notSliced)
{
	notSliced.DoSomething();
}

int main()
{
    Derived sample;
    callByValue(sample); // Derived sliced when passed by value
	callByReference(sample); // no slicing when Derived passed by reference
    return 0;
}
