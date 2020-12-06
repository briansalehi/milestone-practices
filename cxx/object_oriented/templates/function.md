# 02.06.05 template functions

```cxx
#include <iostream>

// template function
// boost the template with inline!
template <typename T>
inline const T getMax(T input1, T input2) {
    return (input1 > input2) ? input1 : input2;
}

int main()
{
    int int1 = 42, int2 = 68;
    double dob1 = 3.1415, dob2 = 3.14159;

    std::cout << "greater number between " << int1 << " and " << int2 << " is: ";
    std::cout << getMax(int1, int2) << std::endl;

    std::cout << "greater number between " << dob1 << " and " << dob2 << " is: ";
    std::cout << getMax(dob1, dob2) << std::endl;

    return 0;
}

```

## Output

```txt
greater number between 42 and 68 is: 68
greater number between 3.1415 and 3.14159 is: 3.14159
```

## Comments *[not verified]*

Macros can substitute function bodies but they have no types, meaning it's just a string substitution.  
But **templates** are great substituions of macros because not only they generate function bodies in compile-time but they also check the types used in functions.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.04. validate expression using assert macro](./../../02.object_oriented/06.templates/04.assert.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.06. auto return type](./../../02.object_oriented/06.templates/06.auto-return.md)

</div>
