#include <iostream>
#include <sstream>
#include <string>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int input): member{input} {};

    // overloaded operators
    operator const char* () {
        std::ostringstream os;
        os << member;
        buffer = os.str();
        return buffer.c_str();
    }

private:
    int member;
    std::string buffer;
};

int main()
{
    Base base(3);
    std::cout << base << std::endl;

    return 0;
}
