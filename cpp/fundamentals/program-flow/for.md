# 01.06.09 for loop

```cxx
#include <iostream>

int main()
{
    int counter = 0;

    for (int i = 0; i < 10; ++i) {
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

When you know exactly how many times your program should  
iterate over a task, you use **for** statement.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.08. do...while](./../../01.the_basics/06.program_flow/08.do_while.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.10. ranged based for loop](./../../01.the_basics/06.program_flow/10.range_based_for.md)

</div>
