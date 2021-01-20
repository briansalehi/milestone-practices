# 01.02.09 getline

```cxx
#include <iostream>

int main()
{
    char name[30];

    std::cout << "Enter a short message: ";
    std::cin.getline(name, 30);
    std::cout << "message: " << name << std::endl;

    return 0;
}

```

## Input

```txt
you will see this shortly.

```

## Output

```txt
Enter a short message: message: you will see this shortly.
```

## Comments *[not verified]*

Notice that this function does exactly what was **get()** function doing, except that
it will not break the input stream after a space and will read a complete line until it
reaches the newline character '\n'.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.08. get](./../../01.the_basics/02.the_anatomy/08.get.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03. Variables and Constants](./../../01.the_basics/03.variables&constants/README.md)

</div>
