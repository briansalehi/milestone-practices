# 02.04.07 copy operator

```cxx
#include <iostream>
#include <string>
#include <cstring>

class Message {
public:
    Message(const char* msg): text(nullptr) {
        text = new char[strlen(msg)+1];
        strcpy(text, msg);
    }

    Message& operator= (const Message& pair) {
        if ((this != &pair) && (pair.text != nullptr)) {
            if (text != nullptr) {
                delete [] text;
            }
            
            text = new char[strlen(pair.text)+1];
            strcpy(text, pair.text);
        }

        return *this;
    }

    operator const char*() {
        return text;
    }

    ~Message() {
        delete [] text;
    }

private:
    char* text;
};

int main()
{
    Message msg1("first message");
    Message msg2("second message");
    std::cout << msg1 << std::endl;
    msg1 = msg2;
    std::cout << msg1 << std::endl;

    return 0;
}

```

## Output

```txt
first message
second message
```

## Comments *[not verified]*

The process of copying a C style string is done by assignment operator and a few functions in **cstring** header file.  
There are some small tips to consider:  

* always check for pointer validity before modification
* always delete a declared block of memory in destructor
* use **const** keyword as many as possible

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.06. inequality](./../../02.object_oriented/04.operators/06.inequality.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.08. subscript operator](./../../02.object_oriented/04.operators/08.subscript.md)

</div>
