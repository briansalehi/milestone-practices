#include <iostream>
#include <iomanip>

int main()
{
    int number = 255;
    double pi = 3.1415926535;

    std::cout << "integer: " << number << std::endl;
    std::cout << "octal: " << std::oct << number << std::endl;
    std::cout << "hexadecimal: 0x" << std::hex << number << std::endl;
    std::cout << setiosflags(std::ios_base::hex|std::ios_base::showbase|std::ios_base::uppercase);
    std::cout << "capital hexadecimal: " << number << std::endl;
    std::cout << resetiosflags(std::ios_base::hex|std::ios_base::showbase|std::ios_base::uppercase);
    std::cout << "ios reset: " << number << std::endl;
    std::cout << std::endl;

    std::cout << "pi number: " << pi << std::endl;
    std::cout << "fixed pi: " << std::fixed << pi << std::endl;
    std::cout << std::setprecision(7);
    std::cout << "pi with precision 7: " << pi << std::endl;
    std::cout << "fixed pi: " << std::fixed << pi << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "pi with precision 10: " << pi << std::endl;
    std::cout << "fixed pi: " << std::fixed << pi << std::endl;
    std::cout << "scientific: " << std::scientific << pi << std::endl;

    return 0;
}
