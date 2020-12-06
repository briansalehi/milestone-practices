# 01.03.04 strlen

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* string = "this will be printed on your screen!";
    printf("string: %s\n", string);
    printf("length: %zd\n", strlen(string));

    return 0;
}

```

## Output

```txt
string: this will be printed on your screen!
length: 36
```

## Comments

no comments

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.03.03. string declaration](./../../01.the_basics/03.arrays_strings/03.string-declaration.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04. input/output (I/O)](./../../01.the_basics/04.input_output/00.README.md)

</div>
</div>
