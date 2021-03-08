# 01.04.07 getchar

```c
#include <stdio.h>

int main(void)
{
    printf("Enter a character: ");
    char character = getchar();
    printf("You entered: %c\n", character);

    return 0;
}

```

## Input

```txt
y

```

## Output

```txt
Enter a character: You entered: y
```

## Comments *[not verified]*

When you need to get a character, **getchar** can be a substitution of scanf as it only works with a single character.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.06. scanf function](./../../01.the_basics/04.input_output/06.scanf.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.08. sizeof operator's type](./../../01.the_basics/04.input_output/08.sizeof.md)

</div>
</div>
