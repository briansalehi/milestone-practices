# 03.02.01 string instantiation

```cxx
#include <iostream>
#include <string>

int main()
{
    const char* language = "C"; // constant std::string literal
    std::string family(2, '+'); // print N times of second parameter character
    std::string job = language;
    job.append(family); // std::string concatanation by append operator
    
    std::string fname = "Jane"; // std::string assignment
    std::string lname("Doe"); // std::string instantiation
    std::string name = fname + " " + lname; // std::string concatanation by addition operator
    
    std::cout << name << " is a " << job << " programmer." << std::endl;
    return 0;
}

```

## Output

```txt
Jane Doe is a C++ programmer.
```

## Comments *[not verified]*

**std::string** can be initialized by string literals, paranthesis and initialization list.  
String objects can also be assigned to each other, copy constructor and move constructor are set properly to handle such assignments.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.02. the STL String Class &lpar;std::string&rpar;](./../../03.stl/02.string/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.02.02. accessing character contents of a string](./../../03.stl/02.string/02.contents.md)

</div>
