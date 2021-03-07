# 01.06.02 for

```c
#include <stdio.h>

int main(void)
{
    int array[5] = {1,2,3,4,5};

    for (int index = 0; index < 5; ++index) {
        printf("%d ", array[index]);
    }
    printf("\n");

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
```

## Comments *[not verified]*

To iterate over a statement over and over to do the same task multiple times, loop are the right tools to be used.  
One of many loops in C is **for** loop which contains of three parts separated by **;** in parenthesis.  
First, the initiation statement, which we declare the variables only living in the loop scope.  
Second, the condition of the loop which indicates how many times should
**for** loop iterate over its block, where we specified the length of array, 5.  
Third, the statement called after each loop to increment or decrement the length of loop identifier, here *index*.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.06.01. if else](./../../01.the_basics/06.control_statements/01.if-else.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.06.03. while](./../../01.the_basics/06.control_statements/03.while.md)

</div>
</div>
