# 01.08.09 using try...catch

```cxx
#include <iostream>
#include <exception>

int main()
{
    try {
        long int amount;
        std::cout << "Enter the amount of memory to be allocated: ";
        std::cin >> amount;
        int* const memory = new int[amount];
        delete [] memory;
    }
    catch(std::exception& exp) {
        std::cout << exp.what() << std::endl;
    }

    return 0;
}

```

## Input

```txt
1000000000

```

## Output

```txt
Enter the amount of memory to be allocated: ```

## Comments *[not verified]*

**new** will throw an exception if the requested amount of memory is invalid.  
You can use **try...catch** statements to catch such exceptions.  
Exceptions will be discussed more later.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.08. pointing to invalid memory](./../../01.the_basics/08.pointers&references/08.invalid.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.10. using nothrow](./../../01.the_basics/08.pointers&references/10.nothrow.md)

</div>
