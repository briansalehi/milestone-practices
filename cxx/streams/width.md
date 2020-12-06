# 05.02.02 field width

```cxx
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    string sentence ("I Love C++ Programming");
    cout << sentence << endl;

    cout << setw (30); // only works for next cout
    cout << sentence << endl;

    cout << setw (30) << setfill ('*'); // fill width by *
    cout << sentence << endl;

    cout << sentence << endl; // back to normal

    return 0;
}
```

## Output

```txt
I Love C++ Programming
        I Love C++ Programming
********I Love C++ Programming
I Love C++ Programming
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.01. I/O stream flags](./../../05.advanced/02.streams/01.ios.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.03. *std::cin* and *std::getline*](./../../05.advanced/02.streams/03.cin.md)

</div>
