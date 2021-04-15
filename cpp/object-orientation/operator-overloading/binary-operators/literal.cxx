#include <iostream>
#include <sstream>

class Temprature
{
public:
    Temprature(long double k) : kelvin(k) // overloaded constructor
	{
	}

    operator const char*() // conversion operator
	{
        std::ostringstream os;
        os << kelvin;
        buffer = os.str();
        return buffer.c_str();
    }

private:
    long double kelvin;
    std::string buffer;
};

Temprature operator"" _C(long double c) {
    return Temprature(c + 273);
}

Temprature operator"" _F(long double f) {
    return Temprature((f + 459.67) *5 / 9);
}

int main()
{
    Temprature k1 = 0.0_C;
    Temprature k2 = 31.73_F;

    std::cout << "celecius: " << k1 << std::endl;
    std::cout << "fahrenheit: " << k2 << std::endl;

    return 0;
}
