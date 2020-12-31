#include <iostream>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int init): member{init} {};

    // methods
    void show() {
        std::cout << member << std::endl;
    }

    // overloaded operators
    Base& operator++ () { // prefix ++
        ++member;
        return *this;
    }

    Base operator++ (int input) { // postfix ++
        Base temp(member);
        ++member;
        return temp;
    }

    Base& operator+ (int input) { // addition
        member += input;
        return *this;
    }

private:
    int member;
};

int main()
{
    Base base(1);
    base.show();

    ++base;
    base.show();

    base++;
    base.show();

    base+2; // here I did not implement additional operator rationally! addition should not modify member itself
    base.show();

    return 0;
}
