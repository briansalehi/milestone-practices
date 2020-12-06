# 01.04.08 sizeof operator's type

```c
#include <stdio.h>

int main(void)
{
    int number = 4;
    printf("number: %d\n", number);
    printf("size: %zd\n", sizeof(number));

    return 0;
}

```

## Output

```txt
number: 4
size: 4
```

## Comments *[not verified]*

We have already covered the **sizeof** operator in previous chapters,
but there is something you need to know when you want to assign the size of
a variable or to print it.

To assign the number evaluated by sizeof operator to a variable, the type
of that variable should be **size_t** which represents the type of unsigned long.

Conversion specifiers also work with scanf function.

Don't forget that in scanf string you should not use characters other than conversion specifiers,
unless scanf will expect to get that character from input:

```c
scanf("%d,%d", num1, num2);
```

This program will not only expect to get two numbers,
but also it expects you to type a comma after the first number.

Based on the conversion specifier used in scanf string, this function will read
input string until it reaches the appropreate escape character.  
Let's say we have **1.685e2# $** in input, by each conversion specifier, scanf will
stop reading at a specific character:

By using %d as conversion specifier, scanf will only read 1 and puts \. character as next character.  
By using %f, scanf will read 1.685e2 and puts $ as next character.  
Similarly if %s is used, scanf will read up to 1.685e2# and will leave the space character as next character.  
And by using %c, scanf will only read the first character and puts it into a variable of type char.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.07. getchar](./../../01.the_basics/04.input_output/07.getchar.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.09. limits](./../../01.the_basics/04.input_output/09.limits.md)

</div>
</div>
