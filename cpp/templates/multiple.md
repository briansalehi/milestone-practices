# 02.06.08 template with multiple parameters

```cxx
#include <iostream>
#include <string>

// multiple template parameters
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

int main()
{
    Base<const char*, std::string> language("C++", "programming");
    language.show();

    Base <int, double> number(14, 3.14159);
    number.show();

    return 0;
}

```

## Output

```txt
C++ programming
14 3.14159
```

## Comments *[not verified]*

**Templates** can get two or more types to be defined.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.07. template classes](./../../02.object_oriented/06.templates/07.class.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.09. template default parameter](./../../02.object_oriented/06.templates/09.default.md)

</div>
