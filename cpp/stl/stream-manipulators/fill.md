# 05.02.15 fill function

```cxx
#include <iostream>
#include <string>

int main()
{
    std::string phone = "+10123456789";
    std::cout.fill('*');

    std::cout << "A verification code has been sent to ";
    std::cout.width(7);
    // loops and iterators will be discussed later
    for (std::string::const_iterator iterator = phone.cend()-3; iterator != phone.cend(); ++iterator) {
        std::cout << *iterator;
    }
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
A verification code has been sent to ******789
```

## Comments *[not verified]*

**width(N)** function will leave **N** character spaces empty in output stream to be filled by
next characters.  
This can be used when you want your users to see how many numbers should they fill in the blank
space.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.14. setf function](./../../05.advanced/02.streams/14.setf.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.16. random access read-write](./../../05.advanced/02.streams/16.random-access.md)

</div>
