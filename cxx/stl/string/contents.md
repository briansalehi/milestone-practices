# 03.02.02 accessing character contents of a string

```cxx
#include <iostream>
#include <string>

int main()
{
    std::string action("C++ Programming");

    // accessing std::string contents using array (C-Style)
    for (size_t iterator = 0; iterator < action.length(); ++iterator) {
        std::cout << action[iterator];
    }
    std::cout << std::endl;

    // accessing std::string contents using iterator
    for (std::string::const_iterator iterator = action.cbegin();
        iterator != action.cend();
        ++ iterator) {
        std::cout << *iterator;
    }
    std::cout << std::endl;

    // accessing content as a const char*
    std::cout << action.c_str() << std::endl;
    
    return 0;
}

```

## Output

```txt
C++ Programming
C++ Programming
C++ Programming
```

## Comments *[not verified]*

**std::string** has few members called **iterators** which are fully discussed in next chapters.  
**iterators** as their name suggests, are great tools to iterate container elements without worrying if we pass the length of a container or not.  
Here we *for* loop to iterate over string container.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02.01. string instantiation](./../../03.stl/02.string/01.instantiation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.03. finding character or substring in a string](./../../03.stl/02.string/03.substring.md)

</div>
