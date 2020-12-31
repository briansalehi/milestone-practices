# 02.06.07 template classes

```cxx
#include <iostream>

// template class
template <typename T>
class Base {
private:
    T member;

public:
    Base(T input): member(input) {}

    void show() {
        std::cout << member << std::endl;
    }
};

int main()
{
    Base<const char*> language("C++");
    language.show();

    Base<int> number(14);
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

**Templates** can also be used on classes.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.06. auto return type](./../../02.object_oriented/06.templates/06.auto-return.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.08. template with multiple parameters](./../../02.object_oriented/06.templates/08.multiple.md)

</div>
