# 01.07.04 parameters with default value

```cxx
#include <iostream>

const double pi = 3.1415;

void Area(double r = 1) {
    double area = pi*r*r;
    std::cout << area << std::endl;
}

int main()
{
    Area();

    return 0;
}

```

## Output

```txt
3.1415
```

## Comments *[not verified]*

Note that default values are only set in function declarations, not function definitions.  
Note that arguments with default values are only allowed if they are after arguments without having values.
That is, you can't do this:  

```c
void function(int x = 1, int y);
```

Functions have a special concept named **signature**, to help compilers distinguish the functions with the same name but different return types or number of arguments or different types of arguments in C++.  
A function signature is the contained of types used to define function's return type, its arguments and order of them.  
So a function like *void function(int x, int y)* has a signature of return type void and two int arguments.  
By using a default value, you actually change the function's signature, so these two functions are identical:  

```c
void function(int x, int y = 1);
void function(int x);
```

You should remember this when using function overloading which will be discussed later.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.03. no returning value functions](./../../01.the_basics/07.functions/03.void.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.05. recursive functions](./../../01.the_basics/07.functions/05.recursion.md)

</div>
