#include <iostream>

class Base {
public:
    Base() = default; // use default constructor
    Base(int input): member{input} {}; // overloaded copy constructors cannot be defaulted
    Base(Base& base) = default; // use default copy constructor
    Base& operator= (const Base& base) = default; // use default copy assignment

    void show() {
        std::cout << "member: " << member << std::endl;
    }

private:
    int member;
};

void make_copy(Base base) {
    base.show();
}

int main()
{
    Base alpha(3); // used defined constructor
    Base beta = alpha; // used default copy assignment
    beta.show(); // should be 3
    make_copy(beta); // use default copy constructor, should be 3

    return 0;
}
