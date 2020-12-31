# 02.04.02 friend

```cxx
#include <iostream>

class Base {
public:
    // constructors
    Base(): member{0} {};
    Base(int input): member{input} {};

    // methods
    void show() {
        std::cout << member << std::endl;
    }

    // overloaded operators
    Base operator+ (int input) const { // member operator has access to private members
        return Base(member+input);
    }

    friend Base operator+ (int input, const Base& base); // non-member operator does not have access to private members so we make them friends

private:
    int member;
};

Base operator+ (int input, const Base& base) {
    Base temp(base.member + input);
    return temp;
}

/* tip: we could define this function as a non-friend and just switch the operation order

Base operator+ (int input, Base& base) const {
    return base + input;
}

*/

int main()
{
    Base alpha(1);
    Base beta = alpha + 1;
    beta.show(); // should be 2

    /* problem: beta.operator+(1) is used when we write beta + 1,
        what if we write 2 + beta ? here comes the friend operators */
    Base gama = 2 + beta;
    gama.show(); // should be 4

    return 0;
}

```

## Output

```txt
2
4
```

## Comments *[not verified]*

Friend functions are introduced in previous sections,
but it didn't mention how to use them.  
The usage of friend operators are introduced here with a problem.  
When we write: **object + 1** , meaning that the object is placed in left side
and integer is in the right side.  
Here compiler will actually compile **object.operator+(int)** .
Note that this operator is one of the object's members.  
But what if we write: **2 + object** ? That is, if integer is in the left side and object in the right side.  
We can solve such problem in two ways:

* use a friend non-member overloaded operator: **friend class operator+(int, class)**
* or use a non-friend operator and then switch the precedence of operators as you may see in the code.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.01. unary operators](./../../02.object_oriented/04.operators/01.increment.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.03. conversion operators](./../../02.object_oriented/04.operators/03.stream.md)

</div>
