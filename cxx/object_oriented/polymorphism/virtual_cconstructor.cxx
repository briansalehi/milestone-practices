#include <iostream>

class Base {
public:
    // virtual copy constructor is impossible, subsequently we simulate it
    virtual Base* clone() = 0;
    virtual void show() = 0;
    virtual ~Base() {};
};

class Derived: public Base {
public:
    Base* clone() override {
        return new Derived(*this);
    }

    void show() override final {
        std::cout << "Derived Method Invoked" << std::endl;
    }
};

int main()
{
    Base* sample = new Derived;
    sample->show();
    delete sample;
    return 0;
}
