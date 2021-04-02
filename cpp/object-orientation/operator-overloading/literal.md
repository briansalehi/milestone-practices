# 02.04.11 user defined literals

```cxx
#include <iostream>
#include <sstream>

class Temprature {
public:
    // constructor
    Temprature(long double k): kelvin{k} {}

    // streaming operator overloading
    operator const char* () {
        std::ostringstream os;
        os << kelvin;
        buffer = os.str();
        return buffer.c_str();
    }

private:
    long double kelvin;
    std::string buffer;
};

Temprature operator"" _C(long double c) {
    return Temprature(c + 273);
}

Temprature operator"" _F(long double f) {
    return Temprature((f + 459.67) *5 / 9);
}

int main()
{
    Temprature k1 = 0.0_C;
    Temprature k2 = 31.73_F;

    std::cout << "celecius: " << k1 << std::endl;
    std::cout << "fahrenheit: " << k2 << std::endl;

    return 0;
}

```

## Output

```txt
celecius: 273
fahrenheit: 273
```

## Comments *[not verified]*

literal overloading can be a great way of simplifying and clarifying operations when a class works with a specific unit of measurement like class of temprature working with kelvin unit, class of length working with meters unit, etc.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.10. move operators](./../../02.object_oriented/04.operators/10.move.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.05. Casting Operators](./../../02.object_oriented/05.casting/README.md)

</div>
