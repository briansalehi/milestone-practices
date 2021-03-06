# 02.06.09 template default parameter

```cxx
#include <iostream>

// default parameter value
template <typename T = int>
class Base {
private:
    T member;

public:
    Base(T input): member{input} {}

    void show() {
        std::cout << member << std::endl;
    }
};

int main()
{
    Base <const char*> language("C++");
    language.show();

    // invoking class with default parameter
    Base<> number(14);
    number.show();

    return 0;
}

```

## Output

```txt
C++
14
```

## Comments *[not verified]*

Use default values on template types just the same way you do for function parameter's default value.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.08. template with multiple parameters](./../../02.object_oriented/06.templates/08.multiple.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.10. template specialization](./../../02.object_oriented/06.templates/10.special.md)

</div>
