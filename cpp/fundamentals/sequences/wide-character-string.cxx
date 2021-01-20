#include <iostream>
#include <string>

int main()
{
    // to print wide character strings, you need to iterate over them, loops and iterators are discussed later
    char16_t char16_string[] = u"this is a char16 type string";
    for (char16_t c: char16_string) {
        std::cout << std::hex << std::showbase << c;
    }
    std::cout << std::endl;

    char32_t char32_string[] = U"this is a char32 type string";
    for (char32_t c: char32_string) {
        std::cout << std::hex << std::showbase << c;
    }
    std::cout << std::endl;

    std::u16string u16_string = {u"this is a u16string type string"};
    for (char16_t c: u16_string) {
        std::cout << std::hex << std::showbase << c;
    }
    std::cout << std::endl;

    std::u32string u32_string = {U"this is a u32string type string"};
    for (char32_t c: u32_string) {
        std::cout << std::hex << std::showbase << c;
    }
    std::cout << std::endl;

    // raw string
    std::string raw_string = R"(this is a "raw string", escape characters are free to live here \n \b \r \a)";
    std::cout << raw_string << std::endl;

    // delimiter used in raw string
    std::string delimitered_string = R"+*(this one is a custom delimitered "(string)" similar to above)+*";
    std::cout << delimitered_string << std::endl;

    return 0;
}
