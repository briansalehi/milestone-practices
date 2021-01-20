# 02.01.18 union

```cxx
#include <iostream>

union simpleType {
    int number;
    char character;
};

struct complexType {
    enum Type {
        Int,
        Char
    } type;

    union Value {
        int number;
        char character;
    } value;
};

void displayType(const complexType& ctype) {
    switch (ctype.type) {
        case complexType::Int:
            std::cout << "value is a number: " << ctype.value.number << std::endl;
            break;
        case complexType::Char:
            std::cout << "value is a character: " << ctype.value.character << std::endl;
            break;
        default:
            std::cout << "unknown character" << std::endl;
    };
}

int main()
{
    simpleType u1, u2;
    u1.number = 10;
    u2.character = 'F';

    std::cout << "size of " << u1.number << " simple integer " << sizeof(u1) << std::endl;
    std::cout << "size of " << u2.character << " simple character " << sizeof(u2) << std::endl;

    complexType t1, t2;
    t1.type = complexType::Int;
    t1.value.number = 20;

    t2.type = complexType::Char;
    t2.value.character = 'M';

    displayType(t1);
    displayType(t2);

    return 0;
}

```

## Output

```txt
size of 10 simple integer 4
size of F simple character 4
value is a number: 20
value is a character: M
```

## Comments *[not verified]*

Unions too, are classes in C++ and their members are public by default unless otherwise is specified.  
Unions can be used in complex types as we did here in this practice.  
They have the same concept as they have in C. Only one member of a union can be occupied at a time.

**note**: coding style is a matter of your taste, you can specify your variables and names in camelCase format, PasCal format or not to use capital letters at all, eg. ComplexType, complexType, complex_type.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.17. friend classes & functions](./../../02.object_oriented/01.classes&objects/17.friend.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.19. initialization aggregation](./../../02.object_oriented/01.classes&objects/19.aggregation.md)

</div>
