# 01.06.03 while

```c
#include <stdio.h>

int main(void)
{
    char answer = 'y';
    while (answer != 'n') {
        printf("do you want to continue? (Y/n)\n");
        scanf("%c", &answer);
    }

    return 0;
}

```

## Input

```txt
y
n

```

## Output

```txt
do you want to continue? (Y/n)
do you want to continue? (Y/n)
do you want to continue? (Y/n)
```

## Comments *[not verified]*

**while** loop iterates over its scope just like the way **for** loop does but with difference in loop condition.  
Let's put it that way, you use **for** loop when you know exactly how many times the iteration goes.  
And you use **while** loop when you don't know how many times the loop will be iterated but you know when to stop it!  
That is, while loop condition is more used to be a state not a counter.  
This is super important, because you will be facing a lot of conditions where you need to iterate like forever! until something happens.
Servers work just this way.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.06.02. for](./../../01.the_basics/06.control_statements/02.for.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06.04. switch](./../../01.the_basics/06.control_statements/04.switch.md)

</div>
</div>
