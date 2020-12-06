# 01.04.06 C++ standard string

```cxx
#include <iostream>
#include <string>

int main()
{
    // read a string
    std::string message("this will be printed on your screen!");
    std::cout << message << std::endl;

    // write in string
    std::string input;
    getline(std::cin, input);
    std::cout << input << std::endl;

    return 0;
}

```

## Input

```txt
this string is safe
```

## Output

```txt
this will be printed on your screen!
this string is safe
```

## Comments *[not verified]*

**std::string** is a string container, specifically designed to hold string values.  
The length of strings are no longer a concern with string container as they manage
memory on their own.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.05. C-style string](./../../01.the_basics/04.arrays&strings/05.char.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04.07. cstring](./../../01.the_basics/04.arrays&strings/07.cstring.md)

</div>
