# 01.02.02 namespace

```cxx
#include <iostream>

namespace myspace {
    int number = 2; // namespace can hold class and functions like cout
    char character = 'A'; // declaring number and character in namespace are substitution of global variables
}

int main()
{
    // default namespace (Standard Template Library)
    using namespace std;
    cout << 1 << endl;

    // accessing an element of a namespace
    cout << myspace::number << endl;

    // using only one member of a namespace, afterwards, there's no need to mention the namespace
    using myspace::character;
    cout << character << endl;

    return 0;
}

```

## Output

```txt
1
2
A
```

## Comments *[not verified]*

Global variables present many problems in large software systems because they can be accessed and possibly modified anywhere in the program. They also can lead to programming errors, since an important global variable may be hidden by a local variable of the same name. As a result, it is best to avoid global variables. We may not be able to avoid globals entirely, however.

A namespace is a mechanism that allows a group of related names to be defined in one place. This helps organize global objects into natural groups and minimizes the problems of globals.

I believe namespaces are better mentioned than being used. that is, don't use **using namespace std**, instead, mention them like **std::cout**. in large code bases, namespaces can colide and make great confusion.  
Though, this is totally optional for you and it's my personal approach in coding not a best practice.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.01. main function](./../../01.the_basics/02.the_anatomy/01.main.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.03. *using* keyword](./../../01.the_basics/02.the_anatomy/03.using.md)

</div>
