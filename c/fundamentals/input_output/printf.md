# 01.04.01 printf function

```c
#include <stdio.h>

int main(void)
{
    printf("This will be printed on your screen!\n");

    return 0;
}

```

## Output

```txt
This will be printed on your screen!
```

## Comments *[not verified]*

In a simple language, this program will write something on your screen.
But this sentence does not seem to represent the goal of this program
professionally!  
We are better to say:

> This program will write a string to the output buffer,
> and then it flushes the buffer contents into the screen!

That's it, what will actually happen when you want to print something on
your screen, is that you write a string surrounded by double quotes (")
into to a memory somewhere called the *output buffer* by **printf** function.
Then a special character like "\n" which represents the **newline character**
in the string, will flush that string from output buffer into the screen.

Flushing the buffer can also be done by **fflush** function, which will
be discussed further later on.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04. input/output (I/O)](./../../01.the_basics/04.input_output/00.README.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.02. putchar](./../../01.the_basics/04.input_output/02.putchar.md)

</div>
</div>
