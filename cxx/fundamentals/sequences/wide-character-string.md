# 01.04.08 wide character string

```cxx
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

```

## Output

```txt
0x740x680x690x730x200x690x730x200x610x200x630x680x610x720x310x360x200x740x790x700x650x200x730x740x720x690x6e0x670
0x740x680x690x730x200x690x730x200x610x200x630x680x610x720x330x320x200x740x790x700x650x200x730x740x720x690x6e0x670
0x740x680x690x730x200x690x730x200x610x200x750x310x360x730x740x720x690x6e0x670x200x740x790x700x650x200x730x740x720x690x6e0x67
0x740x680x690x730x200x690x730x200x610x200x750x330x320x730x740x720x690x6e0x670x200x740x790x700x650x200x730x740x720x690x6e0x67
this is a "raw string", escape characters are free to live here \n \b \r \a
this one is a custom delimitered "(string)" similar to above
```

## Comments *[not verified]*

wide characters, 16 bit and 32 bit characters can be used in programs which may use non-English characters like Japanese.

raw strings can be used for ease of writing escape characters in strings by starting strings by 'R' character like:

    R"(string with escape characters like \n)"

or use custom delimiters:

    R"+*(string with escape characters)+*"

other ways, you should escape each special character in string (don't!)

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.07. cstring](./../../01.the_basics/04.arrays&strings/07.cstring.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04.09. wide string](./../../01.the_basics/04.arrays&strings/09.wide-string.md)

</div>
