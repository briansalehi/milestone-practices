# 02.06.10 template specialization

```cxx
#include <iostream>

template <typename T1, typename T2>
class Base {
private:
    T1 member1;
    T2 member2;

public:
    Base(T1 input1, T2 input2): member1{input1}, member2{input2} {}

    void show() {
        std::cout << member1 << " " << member2 << std::endl;
    }
};

// template class specialization
template <>
class Base<int, int> {
private:
    int member1; // member type is obviously int here as we said so
    int member2;
    size_t counter;

public:
    // all T1 and T2 types are now int as we specialized so
    Base(int input1, int input2): member1{input1}, member2{input2} {}

    void show() {
        std::cout << member1 << std::endl;
    }
};

int main()
{
    Base<int, double> number1(14, 3.14159);
    number1.show();

    Base<int, int> number2(14, 15);
    number2.show();

    return 0;
}

```

## Output

```txt
14 3.14159
14
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.09. template default parameter](./../../02.object_oriented/06.templates/09.default.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.11. variable or variadic templates](./../../02.object_oriented/06.templates/11.variadic.md)

</div>
