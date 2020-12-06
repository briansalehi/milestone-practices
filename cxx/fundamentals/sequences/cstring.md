# 01.04.07 cstring

```cxx
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

```

## Output

```txt
cxx programming
```

## Comments *[not verified]*

**cstring** header file can be included to use C-style string operations like
concatanation, comparison and etc. using **strcat()**, **strcmp()** and etc. respectively.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.06. C++ standard string](./../../01.the_basics/04.arrays&strings/06.string.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04.08. wide character string](./../../01.the_basics/04.arrays&strings/08.wide-character-string.md)

</div>
