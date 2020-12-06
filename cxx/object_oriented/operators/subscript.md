# 02.04.08 subscript operator

```cxx
#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* text;
    Message() {};

public:
    Message(const char* msg): text{nullptr} {
        text = new char[strlen(msg)+1];
        strcpy(text, msg);
    }

    Message(const Message& copycon): text{nullptr} {
        if (copycon.text != nullptr) {
            text = new char[strlen(copycon.text)+1];
            strcpy(text, copycon.text);
        }
    }

    Message& operator= (const Message& pair) {
        if ((this != &pair) && (pair.text != nullptr)) {
            if (text != nullptr) {
                delete [] text;
            }
            
            text = new char [strlen(pair.text)+1];
            strcpy(text, pair.text);
        }

        return *this;
    }

    const char& operator[] (const unsigned int index) const {
        if (index > 0 && index < strlen(text)) {
            return text[index];
        }
        else {
            return text[0];
        }
    }

    operator const char*() {
        return text;
    }

    ~Message() {
        if (text != nullptr) {
            delete [] text;
        }
    }
};

int main()
{
    Message msg("Cxx programming");
    std::cout << msg << std::endl;
    std::cout << msg.operator[](7) << msg.operator[](8) << msg.operator[](9) << std::endl;

    return 0;
}

```

## Output

```txt
Cxx programming
gra
```

## Comments *[not verified]*

Index operator can be overloaded in every class you want, but you should be thinking if it's logical to use them or not.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.07. copy operator](./../../02.object_oriented/04.operators/07.copy.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.09. function operator](./../../02.object_oriented/04.operators/09.function.md)

</div>
