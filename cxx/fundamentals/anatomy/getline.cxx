#include <iostream>

int main()
{
    std::cout << "Enter a short message: ";

    char message[30];
    std::cin.getline(message, 30);

    std::cout << "Message: " << message << std::endl;

    return 0;
}
