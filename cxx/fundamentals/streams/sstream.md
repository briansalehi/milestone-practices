# 05.02.07 std:stringstream

```cxx
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ()
{
    int number = 10;
    cout << "integer representation: " << number << endl;

    stringstream convertable;
    convertable << number;

    string numeric;
    convertable >> numeric;
    cout << "string representation: " << numeric << endl;

    return 0;
}
```

## Output

```txt
integer representation: 10
string representation: 10
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.06. binary files](./../../05.advanced/02.streams/06.binary.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.08. fmtflags](./../../05.advanced/02.streams/08.fmtflags.md)

</div>
