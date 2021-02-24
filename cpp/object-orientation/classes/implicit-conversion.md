# 02.01.14 type conversion

```cxx
#include <iostream>

class Implicit {
public:
    Implicit(): number{0} {};
    Implicit(const int& input): number(input) {};

    void show() {
        std::cout << "implicit: " << number << std::endl;
    }

private:
    int number;
};

class Explicit {
public:
    Explicit(): number{0} {};
    explicit Explicit(const int& input): number{input} {};

    void show() {
        std::cout << "explicit: " << number << std::endl;
    }

private:
    int number;
};

int main()
{
    Implicit num1;
    num1 = 2;
    num1.show();

    Implicit num2;
    num2 = 3.14;
    num2.show();

    Explicit num3(4);
    // num3 = 5; // not authorized
    num3.show();

    /*
    Explicit num4;
    num4 = 5.6; // not authorized
    num4.show();
    */

    return 0;
}

```

## Output

```txt
implicit: 2
implicit: 3
explicit: 4
```

## Comments *[not verified]*

Single-argument constructors are used to convert different types into the object.
Use **explicit** keyword to avoid implicit conversions.  
One important motive to use explicit conversion over implicit is, simply, compile-time errors are better than run-time errors!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.13. stack prohibition](./../../02.object_oriented/01.classes&objects/13.stack_prohibition.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.15. size of class](./../../02.object_oriented/01.classes&objects/15.sizeof.md)

</div>
