# 01.06.01 if else

```c
#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("number is positive\n");
    }
    else if (number == 0) {
        printf("number is zero\n");
    }
    else {
        printf("number is negative\n");
    }

    return 0;
}

```

## Input

```txt
-1

```

## Output

```txt
enter an integer: number is negative
```

## Comments *[not verified]*

**if**, **else if** and **else** are the most fundamental control statement of C programming language.  
Add only as few **else if** statements as possible, because there is a better alternative for **if** when there are many options available to check, called **switch case** statement, which we will discuss later.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.06. control statements](./../../01.the_basics/06.control_statements/00.README.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06.02. for](./../../01.the_basics/06.control_statements/02.for.md)

</div>
</div>
