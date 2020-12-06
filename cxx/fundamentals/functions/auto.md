# 01.07.11 deduction of types by auto keyword

```cxx
#include <iostream>

auto sum(int a, int b) {
    return a + b;
}

int main()
{
    std::cout << sum(1,2) << std::endl;

    return 0;
}

```

## Input

```txt
2
```

## Output

```txt
3
```

## Comments *[not verified]*

You are already familiar with type **auto**.  
The good news is you can also use auto type as function's return type!  
But try not to be a lazy programmer, we already know that using explicit types make our programs easier to follow.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.10. inline functions](./../../01.the_basics/07.functions/10.inline.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.12. lambda functions](./../../01.the_basics/07.functions/12.lambda.md)

</div>
