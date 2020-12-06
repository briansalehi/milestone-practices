# 02.04.01 unary operators

```cxx
#include <iostream>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int init): member{init} {};

    // methods
    void show() {
        std::cout << member << std::endl;
    }

    // overloaded operators
    Base& operator++ () { // prefix ++
        ++member;
        return *this;
    }

    Base operator++ (int input) { // postfix ++
        Base temp(member);
        ++member;
        return temp;
    }

    Base& operator+ (int input) { // addition
        member += input;
        return *this;
    }

private:
    int member;
};

int main()
{
    Base base(1);
    base.show();

    ++base;
    base.show();

    base++;
    base.show();

    base+2; // here I did not implement additional operator rationally! addition should not modify member itself
    base.show();

    return 0;
}

```

## Output

```txt
1
2
3
5
```

## Comments *[not verified]*

operators can be separated as unary and binary operators.  
to overload prefix ++ operator, it needs no argument
but postfix ++ operator must have an argument of type int.  
Be careful when implementing overloaded operators, implementations must match the definition of operators.  
For example here I implemented additional operator + in a wrong way but it's a little bit tricky to find it.  
Additional operator should not modify the member itself but it should treat the member as a constant and instead return an object with an additioned member.
This way, **base+2** won't work anymore because it doesn't change anything in *base*. instead it returns an instance of *Base* class having its member additioned. So, in order to make this work we also need the assignment = operator which we will discuss later.  

```cxx
base + 2; // should not change anything
Base additioned = base + 2; // does not modify base but assigns the result to additioned
```

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04. Operators](./../../02.object_oriented/04.operators/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.02. friend](./../../02.object_oriented/04.operators/02.friend.md)

</div>
