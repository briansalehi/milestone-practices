# 01.02.06 input / output &lpar;I/O&rpar; stream

```cxx
#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: "; // output stream
    std::cin >> name; // input stream
    std::cout << std::endl; // newline in output stream
    std::cout << "your name is: " << name;
    std::cout << "\n"; // C style newline

    return 0;
}

```

## Input

```txt
Brian
```

## Output

```txt
Enter your name: 
your name is: Brian
```

## Comments *[not verified]*

Instead of saying that my program prints something on display, we should say that my program sends something to the output stream.
Somehow, it's more impressive!

Some might argue about using "\n" over std::endl as newline.  
Well, the only big difference is that **std::endl** promises to flush the output stream.  
It means that the program will wait until newline character is printed.  
It is possible on some systems in some circumstances a prompt might not be displayed until after you enter the information being prompted for.  
Personally, I use "\n" when I'm printing a string in output stream and use std::endl otherwise.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.05. return statement](./../../01.the_basics/02.the_anatomy/05.return.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.07. cout options](./../../01.the_basics/02.the_anatomy/07.cout.md)

</div>
