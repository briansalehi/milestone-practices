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
