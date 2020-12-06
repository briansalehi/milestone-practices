#include <iostream>

int main()
{
    char message[30];
    std::cout << "Enter a short message: ";
    std::cin >> message;
    std::cout << "message: " << message << std::endl;
    return 0;
}
