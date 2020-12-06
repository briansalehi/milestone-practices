#include <iostream>
#include <string>

int main()
{
    // to print wide character strings, you need to iterate over them, loops and iterators are discussed later
    wchar_t widechar_string[] = L"this is a wchar_t type string";
    std::wcout << widechar_string << std::endl;

    std::wstring wide_string = {L"this is a wstring type string"};
    std::wcout << wide_string << std::endl;

    return 0;
}
