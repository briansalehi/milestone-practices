# 01.07.05 recursive functions

```cxx
#include <iostream>

// recursive function
int Power(int base, int p) {
    if (p < 2) {
        return base;
    }
    
    return base * Power (base, --p);
}

int main()
{
    int base, exponent;
    std::cout << "enter base and exponent: ";
    std::cin >> base >> exponent;
    std::cout << base << " " << exponent << std::endl;
    std::cout << Power(base, exponent) << std::endl;

    return 0;
}

```

## Input

```txt
2 10
```

## Output

```txt
enter base and exponent: 2 10
1024
```

## Comments *[not verified]*

When a function calls itself, we happen to be using that function recursively.  
To use a function recursively, we must be sure we have a break condition in our function to break the recursion steps somewhere, unless you want to watch your system run out of memory! nothing dangerious will happen in that case as your operating system will stop your program's execution and throws an exception due to too much memory consumption.  
Recursive functions are useful in many cases, but in powerful systems!  
You shouldn't use recursive functions in embedded systems as they consume a huge amount of memory.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.04. parameters with default value](./../../01.the_basics/07.functions/04.default.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.06. multiple *return* statements](./../../01.the_basics/07.functions/06.return.md)

</div>
