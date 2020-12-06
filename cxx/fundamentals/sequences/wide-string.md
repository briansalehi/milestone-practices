# 01.04.09 wide string

```cxx
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

```

## Output

```txt
this is a wchar_t type string
this is a wstring type string
```

## Comments *[not verified]*

Wide string are defined by **wstring** in **string** header file.  
The only difference between std::string and std::wstring is that
std::string can be printed out in std::cout, but std::wstring
cannot be redirected to std::cout, it must be sent to the std::wcout
output stream.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.08. wide character string](./../../01.the_basics/04.arrays&strings/08.wide-character-string.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05. Expressions, Statements and Arithmetic Operators](./../../01.the_basics/05.expressions&statements&operators/README.md)

</div>
