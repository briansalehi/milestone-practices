# 02.01.09 copy constructor

```cxx
#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructor invoked" << std::endl;
        message = NULL;

        if (raw != NULL) {
            message = new char[strlen(raw)+1];
            strcpy(message, raw);

            std::cout << "message is at address: " << std::hex << &message << std::endl;
        }
    }

    Message(const Message& cpymsg) {
        std::cout << "copy constructor invoked" << std::endl;
        message = NULL;

        if (cpymsg.message != NULL) {
            message = new char[strlen(cpymsg.message)+1];
            strcpy(message, cpymsg.message);

            std::cout << "copied message is at address: " << std::hex << &message << std::endl;
        }
    }

    void show() {
        std::cout << "message text: ";
        std::cout << message << std::endl;
    }

    void length() {
        std::cout << "message length: ";
        std::cout << std::dec << strlen(message) << std::endl;
    }

    // destructor
    ~Message() {
        std::cout << "destructor invoked" << std::endl;
        delete [] message;
    }
};

// copy of object pointer
void get_info(Message raw) {
    raw.length();
    raw.show();
}

int main()
{
    Message msg("Cxx Programming");
    get_info(msg);

    return 0;
}

```

## Output

```txt
constructor invoked
message is at address: 0x7ffd4bf29f30
copy constructor invoked
copied message is at address: 0x7ffd4bf29f38
message length: 15
message text: Cxx Programming
destructor invoked
destructor invoked
```

## Comments *[not verified]*

When you pass a variable by value to a function, that function will copy that value and assigns that to its parameter.  
That is, after invoking that function, you will have two of those values on memory.  
This also happens when you pass an object to a function by values.  
Classes do not have any idea how to copy their members into new location by themselves. So that's out job to make sure an object will be copied properly when it's passed to a function.

Copy constructors are declared just like default constructors except that they have a reference of the object as their parameters with no return value.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.08. destructor](./../../02.object_oriented/01.classes&objects/08.destructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.10. move constructor](./../../02.object_oriented/01.classes&objects/10.move_constructor.md)

</div>
