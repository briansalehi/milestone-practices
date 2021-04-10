# 02.01.12 singleton object

```cxx
#include <iostream>
#include <string>

class President {
private:
    std::string name;
    President() {}; // private default constructor
    President(const President& copy); // private copy constructor
    President& operator= (const President& asign); // private copy assignment operator

public:
    // in classes, static makes a member to be shared across all instances of objects
    static President& get_instance() {
        static President candidate;
        return candidate;
    }

    void introduce() {
        std::cout << "current president: " << name << std::endl;
    }

    void set_candidate(std::string president) {
        name = president;
    }

    ~President() {}
};

int main()
{
    President& US = President::get_instance();
    US.set_candidate("Donald Trump");
    US.introduce();

    /*
    President RU; // cannot make private object
    President IT = US; // cannot assign private object
    */

    return 0;
}

```

## Output

```txt
current president: Donald Trump
```

## Comments *[not verified]*

Declaring **default constructor**, **copy constructor** and **assignment operator** as private methods of a class, which prevent an object to be created, assigned or be copied.  
You might wonder why such an object should ever exist. But truth is, sometimes you might need an object to be one and only! That is, only one instance of an object suffices and no other similar objects should ever exist with it.  
This kind of object is called **singleton object**.  
Don't forget that due to not having access to create a singleton object, you must declare a **static** method in the class to create one object for you.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.11. non-copyable objects](./../../02.object_oriented/01.classes&objects/11.non_copyable.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.13. stack prohibition](./../../02.object_oriented/01.classes&objects/13.stack_prohibition.md)

</div>
