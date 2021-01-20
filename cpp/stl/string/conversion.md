# 03.02.06 string conversion

```cxx
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string sample("AbCdEfGhIjK");
    std::cout << "original std::string: " << sample << std::endl;

    transform(sample.begin(), sample.end(), sample.begin(), ::toupper);
    std::cout << "converted to upper case: " << sample << std::endl;

    transform(sample.begin(), sample.end(), sample.begin(), ::tolower);
    std::cout << "converted to lower case: " << sample << std::endl;

    return 0;
}

```

## Output

```txt
original std::string: AbCdEfGhIjK
converted to upper case: ABCDEFGHIJK
converted to lower case: abcdefghijk
```

## Comments *[not verified]*

**transform** function is a very useful one that you really need to always hold it in your mind.  
This function has few overloaded versions capable of doing different tasks, here to lower the letters case.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02.05. string reversal](./../../03.stl/02.string/05.reverse.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.07. &lpar;C++14&rpar; operator ""s](./../../03.stl/02.string/07.operator.md)

</div>
