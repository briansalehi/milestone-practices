# 01.04.06 scanf function

```c
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    return 0;
}

```

## Input

```txt
23

```

## Output

```txt
Enter your age: You are 23 years old
```

## Comments *[not verified]*

To read data from input buffer we can use **scanf**.

You might have already asked yourself that why the **printf**
function carries a string with no newline character, and
still the output buffer is flushed before the **scanf**
function prompts the user for input. the reason is simply because
the **scanf** function will flush output buffer before
it starts reading any data from input buffer.

Notice that **scanf** and **printf** functions have one thing
in common. They take a string to represent the number of
inputs and outputs in their first paramter.  
As you probably noticed, for each integer to print into the
output buffer, your must use a special operator "%d" in the
first parameter of the **printf** function, and to put a value
from input buffer into a variable you must use "%d" in the
first parameter of the **scanf** function.  
What is really happening is that by using these special operators
you tell these functions how many additional parameters they
need to read.  
This much ability and liberty in writing C can sometimes go so wrong!  
You must pay enough attention to use as much parameters as these
functions need in the first parameter. Do not miss one and do not
give more! unless you want to see how your program misbehaves
on your system :)

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.04.05. flags](./../../01.the_basics/04.input_output/05.flags.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.04.07. getchar](./../../01.the_basics/04.input_output/07.getchar.md)

</div>
</div>
