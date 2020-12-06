# 02.01.17 friend classes & functions

```cxx
#include <iostream>

class Base {
public:
    // give this function access to private members of Base
    friend void show(Base& base);

private:
    int member = 0;
};

void show(Base& base) {
    // normally does not have access to private member of Base
    std::cout << base.member << std::endl;
}

int main()
{
    Base object;
    show(object);

    return 0;
}

```

## Output

```txt
0
```

## Comments *[not verified]*

To access private memebers of a class, you either can declare a method inside that class to return the value of that private member,
or you make a foreign function friends with that class to give it access to private member of the class.  
Either way, you need the declaration of those methods inside the class.  
To specify a foreign function as a friend, you need to write the declaration of that function with keyword **friend** in the head of declaration.  
You only have to specify **friend** keyword before function declaration inside the class not in definition of that function outside the class.  
This practice only shows you how to define a friend class, it will not tell you where you can use it.
friend functions will be discussed more in operator overloadings.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.16. struct](./../../02.object_oriented/01.classes&objects/16.struct.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.18. union](./../../02.object_oriented/01.classes&objects/18.union.md)

</div>
