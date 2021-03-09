# 05.02.03 *std::cin* and *std::getline*

```cxx
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    double pi = 0;
    cout << "Enter pi number: ";
    cin >> pi;

    const int buffsize = 10;
    char sentence [buffsize] = {0}; // always instantiate arrays
    cout << "Enter a sentence: ";
    cin.get (sentence, buffsize); // limit cin boundaries by std::cin::get
    cout << sentence << endl;

    string brokenname;
    cout << "Enter your fullname: ";
    cin >> brokenname; // newline would slice string
    cout << brokenname << endl;

    string fullname;
    cout << "Enter your fullname again: ";
    getline(cin, fullname); // getline will get whole string even with \0
    cout << fullname << endl;

    cout << "your pi is " << pi << endl;
    cout << "sentence is: " << sentence << endl;
    cout << "your broken name is: " << brokenname << endl;
    cout << "your fullname is: " << fullname << endl;

    return 0;
}
```

## Input

```txt
3.1415926535
morethan10characterslong
Brian Salehi
Brian Salehi
```

## Output

```txt
Enter pi number: Enter a sentence: 
Enter your fullname: 
Enter your fullname again: 
your pi is 3.14159
sentence is: 
your broken name is: 
your fullname is: 
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.02. field width](./../../05.advanced/02.streams/02.width.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.04. std::fstream](./../../05.advanced/02.streams/04.fstream.md)

</div>
