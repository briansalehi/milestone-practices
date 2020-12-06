# 02.01.16 struct

```cxx
#include <iostream>

struct Human {
// everything public unless specified
private:
    int years;
public:
    Human(int newage): years{newage} {};

    int age() {
        return years;
    }
};

int main()
{
    Human kid(10);
    std::cout << "this human is " << kid.age() << " years old" << std::endl;
    return 0;
}

```

## Output

```txt
this human is 10 years old
```

## Comments *[not verified]*

Structures are just the same as classes in C++.  
In C, to create an structure you need to specify keyword **struct**, we do that here too.  
But to create another sample from that structure in C, you also need to specify **struct** again.  

```c
struct complex {
    int number;
    double fraction;
    char* array;
};

int main(void) {
    struct complex sample;
}
```

But we do not need to specify the keyword **struct** here in the time of creating an object from that structure:  

```cxx
struct complex {
    int number;
    double fraction;
    char* array;
};

int main() {
    complex sample;
}
```

That'll do! we now have an object named *sample* and we can access to its members by **member operator?**:  

```cxx
sample.number = 2;
```


**NOTE**: all of members and methods of structures and unions in C++ are **public** unless otherwise is specified.  
That is, you can skip writing *public*, *private* or *protected*. That way everything is public by default. But in classes you must at least specify one.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.15. size of class](./../../02.object_oriented/01.classes&objects/15.sizeof.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.17. friend classes & functions](./../../02.object_oriented/01.classes&objects/17.friend.md)

</div>
