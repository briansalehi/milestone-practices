# 02.05.01 static casting

```cxx
#include <iostream>

int main()
{
    int integer = 2;
    double number;

    std::cout << integer << std::endl;
    number = static_cast<double> (integer);
    std::cout << number << std::endl;

    return 0;
}

```

## Output

```txt
2
2
```

## Comments *[not verified]*

Variable types can be casted to type of another,
but you must be careful when you do it.  
Suppose you have a type of **double**,
you must not cast it to type **int** as its last 4 bytes will get lost!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.05. Casting Operators](./../../02.object_oriented/05.casting/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.05.02. dynamic casting](./../../02.object_oriented/05.casting/02.dynamic.md)

</div>
