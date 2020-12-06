#include <iostream>

char alphabet();

int main()
{
    // send returned value to ouput stream
    std::cout << "first letter is: " << alphabet() << std::endl;

    return 0;
}

// return value
char alphabet()
{
    return 'A';
}
