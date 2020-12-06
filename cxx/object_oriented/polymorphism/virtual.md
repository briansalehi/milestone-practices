# 02.03.01 virtual method

```cxx
#include <iostream>

class Base {
public:
    // virtual base method
    virtual void show() {
        std::cout << "Base Method Invoked" << std::endl;
    }
};

class Derived1: public Base {
public:
    void show() {
        std::cout << "Derived1 Method Invoked" << std::endl;
    }
};

class Derived2: public Base {
public:
    void show() {
        std::cout << "Derived2 Method Invoked" << std::endl;
    }
};

int main()
{
    Derived1 one;
    Derived2 two;

    one.show();
    two.show();

    return 0;
}

```

## Output

```txt
Derived1 Method Invoked
Derived2 Method Invoked
```

## Comments *[not verified]*

**virtual** methods play a great deal in inheritance and object orientated design.  
Some inherited classes might have the same method's structure as base class has but with different implementation.  
Each class inheriting base class needs to implement base class's virtual methods again.  
One important example is *exception* file header. Though we will discuss **exception handling** in more detail in later chapters.  
Some operators and functions like *new* can throw an exception when there is an error. this exception is caught by **try...catch** statement.
The thrown object is an instance of **exception** class which contains a virtual method called **what()** which returns a string explaining the error.
You can also inherit from **exception** class to make your own object but to do that you need to implement **what()** method in that instance, explaining what the error is.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03. Polymorphism](./../../02.object_oriented/03.polymorphism/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.02. virtual destructors](./../../02.object_oriented/03.polymorphism/02.virtual_destructor.md)

</div>
