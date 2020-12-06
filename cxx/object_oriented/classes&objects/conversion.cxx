#include <iostream>

class Implicit {
public:
    Implicit(): number{0} {};
    Implicit(const int& input): number(input) {};

    void show() {
        std::cout << "implicit: " << number << std::endl;
    }

private:
    int number;
};

class Explicit {
public:
    Explicit(): number{0} {};
    explicit Explicit(const int& input): number{input} {};

    void show() {
        std::cout << "explicit: " << number << std::endl;
    }

private:
    int number;
};

int main()
{
    Implicit num1;
    num1 = 2;
    num1.show();

    Implicit num2;
    num2 = 3.14;
    num2.show();

    Explicit num3(4);
    // num3 = 5; // not authorized
    num3.show();

    /*
    Explicit num4;
    num4 = 5.6; // not authorized
    num4.show();
    */

    return 0;
}
