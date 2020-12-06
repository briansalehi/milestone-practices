# 02.03.04 diamond problem

```cxx
#include <iostream>

class Top {
public:
    Top() {
        std::cout << "Top Constructor Invoked" << std::endl;
    }
    
    ~Top() {
        std::cout << "Top Destructor Invoked" << std::endl;
    }
};

// comment virtual to see what would happen
class Middle1: public virtual Top {
public:
    Middle1() {
        std::cout << "Middle1 Constructor Invoked" << std::endl;
    }

    ~Middle1() {
        std::cout << "Middle1 Destructor Invoked" << std::endl;
    }
};

// virtual base class in the diamond problem makes base class to invoke once
class Middle2: public virtual Top {
public:
    Middle2() {
        std::cout << "Middle2 Constructor Invoked" << std::endl;
    }

    ~Middle2() {
        std::cout << "Middle2 Destructor Invoked" << std::endl;
    }
};

class Middle3: public virtual Top {
public:
    Middle3() {
        std::cout << "Middle3 Constructor Invoked" << std::endl;
    }

    ~Middle3() {
        std::cout << "Middle3 Destructor Invoked" << std::endl;
    }
};

class Bottom: public Middle1, public Middle2, public Middle3 {
public:
    Bottom() {
        std::cout << "Bottom Constructor Invoked" << std::endl;
    }

    ~Bottom() {
        std::cout << "Bottom Destructor Invoked" << std::endl;
    }
};

int main()
{
    Bottom last;
    return 0;
}

```

## Output

```txt
Top Constructor Invoked
Middle1 Constructor Invoked
Middle2 Constructor Invoked
Middle3 Constructor Invoked
Bottom Constructor Invoked
Bottom Destructor Invoked
Middle3 Destructor Invoked
Middle2 Destructor Invoked
Middle1 Destructor Invoked
Top Destructor Invoked
```

## Comments *[not verified]*

Imagine the hierarchy of inheriting classes look like a diamond.  

```txt
    Top  
Middle1 Middle2 Middle3  
    Bottom
```

When we create this structure and inherit those classes as usual,
We will see that for each Middle class there will be an invokation of Top class.
That is, Top class's constructor will be called 3 times here.  
This is called the **Diamond Problem** and we fix this problem by virtually inheriting Top class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.03. pure virtual function](./../../02.object_oriented/03.polymorphism/03.pure.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.03.05. intention to override](./../../02.object_oriented/03.polymorphism/05.override.md)

</div>
