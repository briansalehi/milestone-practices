# 01.02.05 return statement

```cxx
#include <iostream>

char alphabet();

int main()
{
    // send returned value to ouput stream
    std::cout << "first letter is: " << alphabet() << std::endl;

    return 0;
}

// return value
char alphabet()
{
    return 'A';
}

```

## Output

```txt
first letter is: A
```

## Comments *[not verified]*

It is best practice not to use more than one return statement in the execution flow, and only insert one at the bottom of functions.
Generally, more than one return statement will cause confusion while reading your code.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.04. functions](./../../01.the_basics/02.the_anatomy/04.function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.06. input / output &lpar;I/O&rpar; stream](./../../01.the_basics/02.the_anatomy/06.iostream.md)

</div>
