# 03.02.03 finding character or substring in a string

```cxx
#include <iostream>
#include <string>

int main()
{
    std::string sentence("I'm a programmer, my favorite programming language is Cxx becuase it's a great programming language.");

    // find returns first position of std::string when exists otherwise returns std::string::npos
    size_t position = sentence.find("program", 0);

    // use if condition to find first position of substring
    if (position != std::string::npos) {
        std::cout << "substring found at position: " << position << std::endl;
    }
    std::cout << std::endl;

    // use loop to find substring globally
    while (position != std::string::npos) {
        std::cout << "substring found at position: " << position << std::endl;

        size_t offset = position + 1;
        position = sentence.find("program", offset);
    }

    return 0;
}

```

## Output

```txt
substring found at position: 6

substring found at position: 6
substring found at position: 30
substring found at position: 79
```

## Comments *[not verified]*

To find a sub-string in a string we can use **std::find** function which is a property of **algorithm** header file. We will discuss **algorithms** in next few chapters.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02.02. accessing character contents of a string](./../../03.stl/02.string/02.contents.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.04. turncating string](./../../03.stl/02.string/04.truncate.md)

</div>
