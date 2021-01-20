# 01.04.05 C-style string

```cxx
#include <iostream>

int main()
{
    // C-style string
    char sentence[11] = {'I',' ','l','o','v','e',' ','c','x','x','\0'};
    std::cout << sentence << std::endl;
    std::cout << "size: " << sizeof(sentence) << std::endl;
    std::cout << std::endl;

    // null char won't truncate array size but breaks its content
    sentence[6] = '\0';
    std::cout << sentence << std::endl;
    std::cout << "size: " << sizeof(sentence) << std::endl;

    return 0;
}

```

## Output

```txt
I love cxx
size: 11

I love
size: 11
```

## Comments *[not verified]*

**Array** size will never change in run-time, even if you put a null character in the middle of it.
But its content can be truncated by one.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.04. vector](./../../01.the_basics/04.arrays&strings/04.vector.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04.06. C++ standard string](./../../01.the_basics/04.arrays&strings/06.string.md)

</div>
