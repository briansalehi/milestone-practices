# 05.02.01 I/O stream flags

```cxx
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int number = 255;
    double pi = 3.1415926535;

    cout << "integer: " << number << endl;
    cout << "octal: " << oct << number << endl;
    cout << "hexadecimal: 0x" << hex << number << endl;
    cout << setiosflags (ios_base::hex|ios_base::showbase|ios_base::uppercase);
    cout << "capital hexadecimal: " << number << endl;
    cout << resetiosflags (ios_base::hex|ios_base::showbase|ios_base::uppercase);
    cout << "ios reset: " << number << endl;
    cout << endl;

    cout << "pi number: " << pi << endl;
    cout << "fixed pi: " << fixed << pi << endl;
    cout << setprecision (7);
    cout << "pi with precision 7: " << pi << endl;
    cout << "fixed pi: " << fixed << pi << endl;
    cout << setprecision (10);
    cout << "pi with precision 10: " << pi << endl;
    cout << "fixed pi: " << fixed << pi << endl;
    cout << "scientific: " << scientific << pi << endl;

    return 0;
}
```

## Output

```txt
integer: 255
octal: 377
hexadecimal: 0xff
capital hexadecimal: 0XFF
ios reset: 255

pi number: 3.14159
fixed pi: 3.141593
pi with precision 7: 3.1415927
fixed pi: 3.1415927
pi with precision 10: 3.1415926535
fixed pi: 3.1415926535
scientific: 3.1415926535e+00
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02. Streams](./../../05.advanced/02.streams/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.02. field width](./../../05.advanced/02.streams/02.width.md)

</div>
