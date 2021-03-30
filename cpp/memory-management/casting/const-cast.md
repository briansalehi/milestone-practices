# 02.05.04 constant casting

```cxx
#include <iostream>

void change(const int* constant, int number) {
    int* pointer;
    pointer = const_cast<int*> (constant);
    *pointer = number; // changes the constant value using a pointer to its memory address
}

int main()
{
    const int unmodifiable = 3;
    int modifiable = 4;
    std::cout << "unmodifiable:" << unmodifiable << std::endl;
    std::cout << "modifiable:" << modifiable << std::endl;

    change(&unmodifiable, 5);
    change(&modifiable, 5);
    std::cout << "unmodifiable:" << unmodifiable << std::endl;
    std::cout << "modifiable:" << modifiable << std::endl;

    return 0;
}

```

## Output

```txt
unmodifiable:3
modifiable:4
unmodifiable:3
modifiable:5
```

## Comments *[not verified]*

You can change value of a **constant parameter** by **const_cast** operator,
only if the variable was not constant itself.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.05.03. reinterpret casting](./../../02.object_oriented/05.casting/03.reinterpret.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06. Macros and Templates](./../../02.object_oriented/06.templates/README.md)

</div>
