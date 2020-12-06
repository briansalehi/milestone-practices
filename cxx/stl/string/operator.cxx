#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    using namespace std::string_literals;

    std::string simple("This string would be truncated \0 here by NULL character");
    std::cout << simple << std::endl;

    // attention to the s letter at the end of string literal
    std::string complete("This string would not be truncated \0 here thanks to \"s\" operator"s);
    std::cout << complete << std::endl;

    return 0;
}
