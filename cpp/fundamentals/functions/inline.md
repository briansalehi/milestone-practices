# 01.07.10 inline functions

```cxx
#include <iostream>

inline int sum(int a, int b) {
    return a + b;
}

int main()
{
    std::cout << sum << std::endl;

    return 0;
}

```

## Output

```txt
1
```

## Comments *[not verified]*

In earlier chapters we discussed about **constant expresssions**.
They are functions which will be evaluated in compile time.
Meaning, the function's body will be evaluated and the result will be replaced to the position of function calls.

**inline** functions work the same way but in run-time.
That is, function body will be moved to wherever it was called.  
This way, program will not be sacrificing the time to port the program execution flow to another point of memory.  
But don't be too smart using inline functions. Making a function inline and using it many times will make your binary file too big as each of the function calls will be replaced by the function body.  
So, using inline functions are only helpful when the function body is small and you call it as few times as possible.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.09. passing arguments by reference](./../../01.the_basics/07.functions/09.reference.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.11. deduction of types by auto keyword](./../../01.the_basics/07.functions/11.auto.md)

</div>
