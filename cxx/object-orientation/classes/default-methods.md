# 02.01.21 default methods

```cxx
#include <iostream>

class Base {
public:
    Base() = default; // use default constructor
    Base(int input): member{input} {}; // overloaded copy constructors cannot be defaulted
    Base(Base& base) = default; // use default copy constructor
    Base& operator= (const Base& base) = default; // use default copy assignment

    void show() {
        std::cout << "member: " << member << std::endl;
    }

private:
    int member;
};

void make_copy(Base base) {
    base.show();
}

int main()
{
    Base alpha(3); // used defined constructor
    Base beta = alpha; // used default copy assignment
    beta.show(); // should be 3
    make_copy(beta); // use default copy constructor, should be 3

    return 0;
}

```

## Output

```txt
member: 3
member: 3
```

## Comments *[not verified]*

**default** keyword can be used to let the compiler generate
specified methods automatically just the way it creates a
default constructor when you don't declare one.

**Note** that some methods cannot be defaulted, such as overloaded copy constructors,
overloaded + operator and etc.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.20. constant expression in classes](./../../02.object_oriented/01.classes&objects/20.constexpr.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.22. delete methods](./../../02.object_oriented/01.classes&objects/22.deleted-methods.md)

</div>
