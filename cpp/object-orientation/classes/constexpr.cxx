#include <iostream>

class Base
{
private:
    const int member;
public:
    constexpr Base(const int input): member{input} {}
    constexpr const int show() const { return member; }
};

int main()
{
    constexpr Base object(10);
    const int number = object.show();
    std::cout << "number: " << number << std::endl;

    return 0;
}
