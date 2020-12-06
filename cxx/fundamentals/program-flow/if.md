# 01.06.01 *if* statement

```cxx
#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    // if...else statement
    if (num1 < num2)
        std::cout << num1 << " is lower than " << num2 << std::endl;
    else if (num2 < num1)
        std::cout << num2 << " is lower than " << num1 << std::endl;
    else
        std::cout << num1 << " and " << num2 << " are equal!" << std::endl;

    return 0;
}

```

## Input

```txt
2 4
```

## Output

```txt
enter two numbers: 
2 is lower than 4
```

## Comments *[not verified]*

The main and most used statement for controlling the flow of  
of a program is **if** statement.

**if** has its scope and variables declared in this scope are  
immediately destroyed when program reaches to the end of  
this scope.  

Don't forget to explicitly specify this scope by curly braces,  
{ }.  
Though, **if** can be used without scope specifiers, it will  
only read the first line after it. But expect your program to  
misbehave in future when you forget to add scope specifiers  
after you add an extra line and expecting **if** to read.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06. Program Flow Control](./../../01.the_basics/06.program_flow/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.06.02. boundary checking](./../../01.the_basics/06.program_flow/02.boundary.md)

</div>
