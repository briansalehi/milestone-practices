# 01.07.06 multiple *return* statements

```cxx
#include <iostream>

void Talk()
{
    char answer = 'n';

    std::cout << "would you like to see a message (y/n)? ";
    std::cin >> answer;
    std::cout << answer << std::endl;

    /*
        in this case, multiple return statements could simply be avoided
        by checking if (answer == 'y') while answer is initialized by 'n'
    */
    if (answer == 'n') {
        return;
    }
    
    std::cout << "inbox is empty!" << std::endl;
    
    return;
}

int main()
{
    Talk();

    return 0;
}

```

## Input

```txt
y
```

## Output

```txt
would you like to see a message (y/n)? y
inbox is empty!
```

## Comments *[not verified]*

As we discussed earlier, multiple return statements can be confusing as all programs are expected
to be ended in their last line.  
Avoid multiple return statements, there is always a better way to do what you are going to do with multiple return statements.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.05. recursive functions](./../../01.the_basics/07.functions/05.recursion.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.07. function overloading](./../../01.the_basics/07.functions/07.overloading.md)

</div>
