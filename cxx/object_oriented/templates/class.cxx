#include <iostream>

// template class
template <typename T>
class Base {
private:
    T member;

public:
    Base(T input): member(input) {}

    void show() {
        std::cout << member << std::endl;
    }
};

int main()
{
    Base<const char*> language("C++");
    language.show();

    Base<int> number(14);
    number.show();

    return 0;
}
