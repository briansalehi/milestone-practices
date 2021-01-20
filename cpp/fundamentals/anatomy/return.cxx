#include <iostream>

// returns a character
char alphabet()
{
    return 'A';
}

int main()
{
    // send returned value to ouput stream
    std::cout << "first letter is: " << alphabet() << std::endl;

    return 0;
}
