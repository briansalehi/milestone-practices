# 02.01.10 move constructor

```cxx
#include <iostream>
#include <cstring>

class Base {
public:
    Base(const char* input) {
        std::cout << "Constructor Invoked" << std::endl;
        member = nullptr;

        if (input != nullptr) {
            member = new char[strlen(input)+1];
            strcpy(member, input);
            std::cout << "member address: " << std::hex << &member << std::endl;
        }
    };

    Base(const Base& base) {
        std::cout << "Copy Constructor Invoked" << std::endl;
        member = nullptr;

        if (base.member != nullptr) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "copied member address: " << std::hex << &member << std::endl;
        }
    };

    Base(const Base&& base) {
        std::cout << "Move Constructor Invoked" << std::endl;
        member = nullptr;

        if (base.member != nullptr) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "movable member address: " << std::hex << &base.member << std::endl;
            std::cout << "moved member address: " << std::hex << &member << std::endl;
            delete [] base.member;
        }
    };

    ~Base() {
        std::cout << "Destructor Invoked" << std::endl;
        if (member != nullptr) {
            delete [] member;
        }
    };

private:
    char* member;
};

Base&& move(Base& base) {
    return std::move(base);
}

int main()
{
    Base object("using move semantics");
    Base reference = move(object);

    return 0;
}

```

## Output

```txt
Constructor Invoked
member address: 0x7ffccdb60930
Move Constructor Invoked
movable member address: 0x7ffccdb60930
moved member address: 0x7ffccdb60938
Destructor Invoked
Destructor Invoked
```

## Comments *[not verified]*

Move semantics are helpful when there's a big object which we cannot afford having another copy of it.  
In this situation when there's not enough memory to just have a few copies of an object, we need to directly move those objects when they are passed as arguments or they are returned from functions.

To make **move semantics** happen, we need to declare a **move constructor**, the way we declared a copy constructor. Instead, here we have two & operators meaning the move operator.  
and there's another difference between move constructor and a copy constructor, and that's we set the source members to NULL after we moved them to the destination. This way, source will no longer exist, and the object is moved to the destination. No extra memory occupied.  
To make sure object is moved we also use **std::move()** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.09. copy constructor](./../../02.object_oriented/01.classes&objects/09.copy_constructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.11. non-copyable objects](./../../02.object_oriented/01.classes&objects/11.non_copyable.md)

</div>
