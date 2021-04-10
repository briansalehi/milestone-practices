# 02.01.11 non-copyable objects

```cxx
#include <iostream>
#include <cstring>

class Message {
private:
    char* message;
    // avoid object to be copied
    Message(const Message& copy); // private copy constructor
    Message& operator= (const Message& asign); // private copy assignment operator

public:
    Message(const char* raw) {
        std::cout << "Overloaded Constructor Invoked" << std::endl;
        message = nullptr;
        message = new char[strlen(raw)+1];
        strcpy(message, raw);
    }

    void show() {
        std::cout << "message: " << message << std::endl;
    }

    int length() {
        return strlen(message);
    }

    ~Message() {
        std::cout << "Distructor Invoked" << std::endl;
        delete [] message;
    }
};

void get_info(Message tmp) {
    tmp.show();
}

int main()
{
    Message msg("Cxx Programming");
    msg.show();

    /*
    get_info(msg); // cannot make a copy
    */
    
    return 0;
}

```

## Output

```txt
Overloaded Constructor Invoked
message: Cxx Programming
Distructor Invoked
```

## Comments *[not verified]*

Declaring **copy constructor** and **copy assignment operator** as private methods, will prevent an object from being copied.  
This way, you can make sure an object will not be passed by value to function arguments or it will not be returned by value from functions.  
This makes us sure that our object will not be too memory consuming.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.10. move constructor](./../../02.object_oriented/01.classes&objects/10.move_constructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.12. singleton object](./../../02.object_oriented/01.classes&objects/12.singleton.md)

</div>
