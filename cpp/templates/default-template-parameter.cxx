#include <iostream>

// default parameter value
template <typename T = int>
class Base {
private:
    T member;

public:
    Base(T input): member{input} {}

    void show() {
        std::cout << member << std::endl;
    }
};

int main()
{
    Base <const char*> language("C++");
    language.show();

    // invoking class with default parameter
    Base<> number(14);
    number.show();

    return 0;
}
