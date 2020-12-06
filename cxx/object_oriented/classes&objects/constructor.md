# 02.01.03 constructor

```cxx
#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructing message" << std::endl;
        message = NULL;

        if (raw != NULL) {
            message = new char[strlen(raw)+1];
            strcpy(message, raw);
        }
    }

    void show() {
        std::cout << "message: " << message << std::endl;
    }

    void length() {
        std::cout << "length: " << strlen(message) << std::endl;
    }

    ~Message() {
        std::cout << "deleting message" << std::endl;
        delete [] message;
    }
};

int main()
{
    Message msg("Cxx programming");
    msg.length();
    msg.show();

    return 0;
}

```

## Output

```txt
constructing message
length: 15
message: Cxx programming
deleting message
```

## Comments *[not verified]*

Constructors are the methods in classes having the same name of the class.
They are invoked right after an object is created.
Either they can have arguments or not.

Constructors have no return value.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.02. abstraction](./../../02.object_oriented/01.classes&objects/02.abstraction.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.04. overloading constructors](./../../02.object_oriented/01.classes&objects/04.overloading.md)

</div>
