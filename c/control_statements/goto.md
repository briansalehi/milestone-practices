# 01.06.05 goto (depricated)

```c
#include <stdio.h>

int main(void)
{
    int counter = 0;

__label:
    printf("this is so lame!\n");
    if (counter++ < 3) {
        goto __label;
    }

    return 0;
}

```

## Output

```txt
this is so lame!
this is so lame!
this is so lame!
this is so lame!
```

## Comments *[not verified]*

I am not going explain **goto** statement, you **never** use it too.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.06.04. switch](./../../01.the_basics/06.control_statements/04.switch.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06.06. iso646](./../../01.the_basics/06.control_statements/06.iso646.md)

</div>
</div>
