# 02.01.08 destructor

```cxx
#include <iostream>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructor" << std::endl;
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

    // destructor
    ~Message() {
        std::cout << "distructor" << std::endl;
        delete [] message;
    }
};

int main()
{
    Message msg("Cxx Programming");
    std::cout << "length: " << msg.length() << std::endl;
    std::cout << "message: " << msg.show() << std::endl;

    return 0;
}

```

## Output

```txt
constructor
length: 15
message: Cxx Programming
distructor
```

## Comments *[not verified]*

Destructors are invoked just before the object is completely destroyed.  
Constructors and destructors are great places to allocate memory right after object creation and delete just before object destruction.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.07. initializer list](./../../02.object_oriented/01.classes&objects/07.initializer_list.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.09. copy constructor](./../../02.object_oriented/01.classes&objects/09.copy_constructor.md)

</div>
