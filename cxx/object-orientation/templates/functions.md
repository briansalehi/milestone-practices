# 02.06.03 macro functions

```cxx
#include <iostream>
// macro function, parentheses are necessary due to text replacement, e.g. x="3+2"
#define SQUARED(x) ((x) * (x))

int main()
{
    int number = 4;
    std::cout << "square of " << number << " is: " << SQUARED(number) << std::endl;

    return 0;
}

```

## Output

```txt
square of 4 is: 16
```

## Comments *[not verified]*

Be careful using macro functions, you might easily make mistakes.  
Keep in mind that macros are only compile-time string substitutions in your code.  
Let's say we have this function:

```cxx
#define SQUARED(x) (x * x)
```

If you set x as 3+2, compiler will see this as (3+2 * 3+2). considering mathematical precedence, 2*3 will be first evaluated.  
So to make sure your macro functions work as they supposed to, surround them with parenthesis.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.02. multiple inclusion guard](./../../02.object_oriented/06.templates/02.guard.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.04. validate expression using assert macro](./../../02.object_oriented/06.templates/04.assert.md)

</div>
