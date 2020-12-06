# 01.06.07 while

```cxx
#include <iostream>

int main()
{
    int counter = 0;

    while (counter < 10) {
        ++counter;
    }

    std::cout << counter << std::endl;

    return 0;
}

```

## Output

```txt
10
```

## Comments *[not verified]*

**while** loop is a state condition loop. meaning, when you  
are trying to do something until a statement is true, you  
can use while loop.  

Imagine a situation when you don't know how many times you  
should do something, but you know when to stop it!

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.06. *goto* statement &lpar;depricated&rpar;](./../../01.the_basics/06.program_flow/06.goto.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.08. do...while](./../../01.the_basics/06.program_flow/08.do_while.md)

</div>
