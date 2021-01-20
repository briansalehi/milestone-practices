#include <iostream>

int main()
{
    // don't forget to initialize pointer with nullptr
    // bool* isSunny = nullptr;

    std::cout << "is it sunny? (y/n)" << std::endl;
    char userInput = 'y';
    std::cin >> userInput;

    // initialize your pointers with new and make them a constant pointer
    bool* const isSunny = new bool;

    if (userInput == 'y') {
        *isSunny = true;
    }
    // don't miss possible values
    else {
        *isSunny = false;
    }

    std::cout << "sunny state: " << *isSunny << std::endl;

    // ensure you use delete when new was initialized
    if (isSunny) {
        delete isSunny;
    }
    
    return 0;
}
