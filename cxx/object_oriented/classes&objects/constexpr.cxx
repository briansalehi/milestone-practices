#include <iostream>

class Base {
private:
    int member;
public:
    constexpr Base(int input): member{input} {}
    constexpr int show() const { return member; }
};

int main()
{
    constexpr Base object(10);
    const int number = object.show();
    std::cout << "number: " << number << std::endl;

    return 0;
}
