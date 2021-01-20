# 03.02.04 turncating string

```cxx
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string original("Cxx programming language");
    std::cout << "original string: " << original << std::endl;

    // truncate by offset position and count
    std::string trun1(original);
    trun1.erase(0, 7);
    std::cout << "truncate 1: " << trun1 << std::endl;

    // truncate by iterator pointing to a character
    std::string trun2(original);
    std::string::iterator position = find(trun2.begin(), trun2.end(), 'C');

    if (position != trun2.cend()) {
        trun2.erase(position);
    }
    std::cout << "truncate 2: " << trun2 << std::endl;

    // truncate by overloaded version of erase and iterators
    std::string trun3(original);
    trun3.erase(trun3.begin(), trun3.end());
    std::cout << "truncate 3: " << trun3 << std::endl;
    
    if (trun3.length() == 0) {
        std::cout << "std::string is empty!" << std::endl;
    }

    return 0;
}

```

## Output

```txt
original string: Cxx programming language
truncate 1: gramming language
truncate 2: xx programming language
truncate 3: 
std::string is empty!
```

## Comments *[not verified]*

**truncate** is a method in **std::string** class to truncate the holding string.  
This method is overloaded with many possibilities and can be safely used with iterators.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02.03. finding character or substring in a string](./../../03.stl/02.string/03.substring.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.05. string reversal](./../../03.stl/02.string/05.reverse.md)

</div>