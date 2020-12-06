# 01.04.05 flags

```c
#include <stdio.h>

int main(void)
{
    printf("%%-d: %-d %-d \n", -1, 1);
    printf("%%+d: %+d %+d \n", -1, 1);
    printf("%% d: % d % d \n", -1, 1);
    printf("%%#x: %#x %#X \n", 0xf, 0xf);
    printf("%%0d: %0d %0d \n", -1, 1);

    return 0;
}

```

## Output

```txt
%-d: -1 1 
%+d: -1 +1 
% d: -1  1 
%#x: 0xf 0XF 
%0d: -1 1 
```

## Comments *[not verified]*

flags are useful when you want to manipulate the signs and notations of printing numbers.  

* if **-** is used, item is left-justified, meaning it is printed in the left most side of the field.
* if **+** is used, number signs are shown, whether negative or positive.
* if space is used, if number is positive, it will be printed with a leading space without a sign, if negative, just - sign is shown. will be ignored by + flag.
* if 0 is used, numbers will be printed with a leading zero, and will be ignored by - flag or precisions for floating points

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.04. modifiers](./../../01.the_basics/04.input_output/04.modifiers.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.06. scanf function](./../../01.the_basics/04.input_output/06.scanf.md)

</div>
</div>
