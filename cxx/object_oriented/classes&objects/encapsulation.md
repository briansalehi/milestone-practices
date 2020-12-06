# 02.01.01 encapsulation

```cxx
#include <iostream>
#include <string>

// class
class Human {
public: // abstraction
    std::string name;
    short age;

    // method
    void introduce(){
        std::cout << "I am " << name << ", and I'm " << age << " years old." << std::endl;
    }
};

int main()
{
    // class instance, object man
    Human person;
    // dot operator to access object elements
    person.name = "Brian";
    person.age = 23;

    // allocating new object
    Human* ghost = new Human();
    // pointer operator to access object pointer elements
    ghost->name = "Cane";
    ghost->age = 1240;

    person.introduce();
    ghost->introduce();

    delete ghost; // never forget to delete newly allocated memory
    return 0;
}

```

## Output

```txt
I am Brian, and I'm 23 years old.
I am Cane, and I'm 1240 years old.
```

## Comments *[not verified]*

In simple words, encapsulation means putting all sorts of data and types together to make a meaningful block of bigger data.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01. Classes and Objects](./../../02.object_oriented/01.classes&objects/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.02. abstraction](./../../02.object_oriented/01.classes&objects/02.abstraction.md)

</div>
