# 02.04.03 conversion operators

```cxx
#include <iostream>
#include <sstream>
#include <string>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int input): member{input} {};

    // overloaded operators
    operator const char* () {
        std::ostringstream os;
        os << member;
        buffer = os.str();
        return buffer.c_str();
    }

private:
    int member;
    std::string buffer;
};

int main()
{
    Base base(3);
    std::cout << base << std::endl;

    return 0;
}

```

## Output

```txt
3
```

## Comments *[not verified]*

To make your object able to directly work with streaming objects like standard output, you should declare a **const char\*** operator.  
To do so, you should include **sstream** operator and use **std::ostringstream** object in order to convert any type of members into string and then return them as a C style string.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.02. friend](./../../02.object_oriented/04.operators/02.friend.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.04. assignment operator](./../../02.object_oriented/04.operators/04.assignment.md)

</div>
