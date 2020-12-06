# 02.01.20 constant expression in classes

```cxx
#include <iostream>

class Base {
private:
    int member;
public:
    constexpr Base(int input): member{input} {}
    constexpr int show() const { return member; }
};

int main()
{
    constexpr Base object(10);
    const int number = object.show();
    std::cout << "number: " << number << std::endl;

    return 0;
}

```

## Output

```txt
number: 10
```

## Comments *[not verified]*

**Constant expressions** are special functions evaluated in compile time.
They can boost your programs when used.  
Fortunately, we can take advantage of them in classes too. We can make constant expression constructors and methods to have them evaluated in compile time. Also, object creations can be specified as constant expressions too.  
Here in this practice, we will have our number variable evaluated in compile time!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.19. initialization aggregation](./../../02.object_oriented/01.classes&objects/19.aggregation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.21. default methods](./../../02.object_oriented/01.classes&objects/21.default-methods.md)

</div>
