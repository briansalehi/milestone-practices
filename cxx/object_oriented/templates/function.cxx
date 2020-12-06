#include <iostream>

// template function
// boost the template with inline!
template <typename T>
inline const T getMax(T input1, T input2) {
    return (input1 > input2) ? input1 : input2;
}

int main()
{
    int int1 = 42, int2 = 68;
    double dob1 = 3.1415, dob2 = 3.14159;

    std::cout << "greater number between " << int1 << " and " << int2 << " is: ";
    std::cout << getMax(int1, int2) << std::endl;

    std::cout << "greater number between " << dob1 << " and " << dob2 << " is: ";
    std::cout << getMax(dob1, dob2) << std::endl;

    return 0;
}
