# 01.06.04 switch

```c
#include <stdio.h>

int main(void)
{
    int number;
    printf("enter a number between 1 to 3: ");
    scanf("%d", &number);

    switch(number) {
        case 1:
            printf("number one\n");
            break;
        case 2:
            printf("number two\n");
            break;
        case 3:
            printf("number three\n");
            break;
        default:
            printf("out of range\n");
    }

    return 0;
}

```

## Input

```txt
4

```

## Output

```txt
enter a number between 1 to 3: out of range
```

## Comments *[not verified]*

When you need to compare a value into multiple possible values, instead of using multiple **if** and **else if** statements,
use **switch** statement.

Notice that between each block we specified **break** which terminates comparison after a match.  
If not specified, all of non-terminated blocks will be compared too.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.06.03. while](./../../01.the_basics/06.control_statements/03.while.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06.05. goto (depricated)](./../../01.the_basics/06.control_statements/05.goto.md)

</div>
</div>
