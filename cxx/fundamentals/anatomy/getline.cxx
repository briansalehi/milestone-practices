#include <iostream>

int main()
{
    char name[30];

    std::cout << "Enter a short message: ";
    std::cin.getline(name, 30);
    std::cout << "message: " << name << std::endl;

    return 0;
}
