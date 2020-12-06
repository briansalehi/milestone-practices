# 01.02.07 boolean

```c
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool state = false;

    if (state) {
        printf("state is true\n");
    }
    else {
        printf("state is false\n");
    }

    return 0;
}

```

## Output

```txt
state is false
```

## Comments *[not verified]*

To use booleans, instead of using **_Bool** type, you can include **stdbool.h** header file to substitute **_Bool** with **bool** and also use **true** and **false** instead of using 1 and 0.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.02.06. sizeof operator](./../../01.the_basics/02.variables_constants/06.sizeof.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.03. arrays and strings](./../../01.the_basics/03.arrays_strings/00.README.md)

</div>
</div>
