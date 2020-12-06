#include <iostream>

namespace myspace {
    int number = 2; // namespace can hold class and functions like cout
    char character = 'A'; // declaring number and character in namespace are substitution of global variables
}

int main()
{
    // default namespace (Standard Template Library)
    using namespace std;
    cout << 1 << endl;

    // accessing an element of a namespace
    cout << myspace::number << endl;

    // using only one member of a namespace, afterwards, there's no need to mention the namespace
    using myspace::character;
    cout << character << endl;

    return 0;
}
