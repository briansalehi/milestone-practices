# 02.02.05 order of constructors and destructors

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

class Middle: public Top {
public:
    Middle() {
        std::cout << "Middle Constructor Invoked" << std::endl;
    }

    ~Middle() {
        std::cout << "Middle Destructor Invoked" << std::endl;
    }
};

class Bottom: public Middle {
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
    Bottom object;
        
    return 0;
}

```

## Output

```txt
Top Constructor Invoked
Middle Constructor Invoked
Bottom Constructor Invoked
Bottom Destructor Invoked
Middle Destructor Invoked
Top Destructor Invoked
```

## Comments *[not verified]*

Constructors are the first methods invoked when an object is created and destructors are the last methods invoked before an object cease to exist.  
When an object is created, constructors of its parents are first invoked from top to bottom and in the time of destruction, destructors are invoked from bottom to top. Actually the *Base* class has the first constructor and last destructor being invoked.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.02.04. overriding methods](./../../02.object_oriented/02.inheritance/04.override.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02.06. private inheritance](./../../02.object_oriented/02.inheritance/06.private.md)

</div>
