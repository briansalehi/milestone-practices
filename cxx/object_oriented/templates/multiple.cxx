#include <iostream>
#include <string>

// multiple template parameters
template <typename T1, typename T2>
class Base {
private:
    T1 member1;
    T2 member2;

public:
    Base(T1 input1, T2 input2): member1{input1}, member2{input2} {}

    void show() {
        std::cout << member1 << " " << member2 << std::endl;
    }
};

int main()
{
    Base<const char*, std::string> language("C++", "programming");
    language.show();

    Base <int, double> number(14, 3.14159);
    number.show();

    return 0;
}
