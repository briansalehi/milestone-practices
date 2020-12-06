# 01.06.02 boundary checking

```cxx
#include <iostream> // std::cout, std::endl, std::getline, std::cin
#include <string> // std::string
#include <cstring> // strcpy

int main()
{
    std::string sentence;

    std::cout << "type a sentence: ";
    std::getline(std::cin, sentence);

    // always check std::string boundaries before copying it to C-style strings
    char array[20] = {0};
    if (sentence.length() < 20) {
        strcpy(array, sentence.c_str());
        std::cout << array << std::endl;
    }
    else
        std::cout << "you have crossed the boundary" << std::endl;


    return 0;
}

```

## Input

```txt
keyword if, is a simple flow control statement
```

## Output

```txt
type a sentence: you have crossed the boundary
```

## Comments *[not verified]*

You can manipulate an array of characters or strings using  
C-style functions, **strcpy**, **strcmp** or **strcat** by  
including the **cstring** header file.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.01. *if* statement](./../../01.the_basics/06.program_flow/01.if.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.03. nested conditions](./../../01.the_basics/06.program_flow/03.nested.md)

</div>
