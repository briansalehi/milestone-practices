# 02.01.15 size of class

```cxx
#include <iostream>
#include <cstring>

class Message {
public:
    Message(const char* raw) {
        std::cout << "Constructor Invoked" << std::endl;
        message = NULL;
        message = new char[strlen(raw)+1];
        strcpy(message, raw);
    }

    char* show() {
        return message;
    }

    int length() {
        return strlen(message);
    }

    ~Message() {
        std::cout << "Distructor Invoked" << std::endl;
        delete [] message;
    }

private:
    char* message;
};

int main()
{
    Message msg("Cxx Programming");
    std::cout << "length: " << msg.length() << std::endl;
    std::cout << "message: " << msg.show() << std::endl;

    // size of class does not contain method data
    std::cout << "size of object: " << sizeof(msg) << std::endl;

    return 0;
}

```

## Output

```txt
Constructor Invoked
length: 15
message: Cxx Programming
size of object: 8
Distructor Invoked
```

## Comments *[not verified]*

Objects too, have a size and can be measured by **sizeof()** operator.  
Remember that methods do not count in size of an object because they are not treated as data and they are just there to be invoked.  
So, what you see as a size of an object is basically the size of all data members in that object.  
In this example you can see that it's 4 bytes, which makes sense. the member of this object is a *pointer to char* which is a pointer holding a memory address and memory addresses are 4 bytes on my system.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.14. type conversion](./../../02.object_oriented/01.classes&objects/14.conversion.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.16. struct](./../../02.object_oriented/01.classes&objects/16.struct.md)

</div>
