#include <iostream>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int input): member{input} {};

    // methods
    void show() {
        std::cout << member << std::endl;
    }

    // overloaded operators
    Base operator+ (int input) const { // member operator has access to private members
        return Base(member+input);
    }

	// non-member operator does not have access to private members so we make them friends
    friend Base operator+ (int input, const Base& base);

private:
    int member;
};

Base operator+ (int input, const Base& base) {
    Base temp(base.member + input);
    return temp;
}

/* tip: we could define this function as a non-friend and just switch the operation order

Base operator+ (int input, Base& base) const {
    return base + input;
}

*/

int main()
{
    Base alpha(1);
    Base beta = alpha + 1;
    beta.show(); // should be 2

    /* problem: beta.operator+(1) is used when we write beta + 1,
        what if we write 2 + beta ? here comes the friend operators */
    Base gama = 2 + beta;
    gama.show(); // should be 4

    return 0;
}
