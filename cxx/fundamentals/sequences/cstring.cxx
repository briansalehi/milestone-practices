#include <iostream>
#include <cstring>

int main()
{
    // cstring header file can be used to operate on C-style strings
    char char_string1[20] = "cxx";
    char char_string2[20] = " programming";
    strcat(char_string1, char_string2); // needs cstring header file
    std::cout << char_string1 << std::endl;

    return 0;
}
