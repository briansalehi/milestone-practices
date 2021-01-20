# 05.02.06 binary files

```cxx
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Human {
    int age;
    char name[30];

    Human () {};
    Human (const char* iname, const int iage): age(iage) {
        strcpy (name, iname);
    };
};

int main ()
{
    ofstream wfile;
    wfile.open ("file.temp", ios_base::out);

    if (wfile.is_open()) {
        Human worker ("Adam", 35);
        wfile.write(reinterpret_cast <const char*> (&worker), sizeof(worker));
        wfile.close ();

        cout << "wrote object into file" << endl;
    }

    ifstream rfile;
    rfile.open ("file.temp", ios_base::in);

    if (rfile.is_open()) {
        Human someone;
        rfile.read ((char*)&someone, sizeof(someone));
        rfile.close ();
        
        cout << "read object from file" << endl;
        cout << someone.name << " is " << someone.age << " years old" << endl;
    }

    return 0;
}
```

## Output

```txt
wrote object into file
read object from file
Adam is 35 years old
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.05. append into the end of file](./../../05.advanced/02.streams/05.append.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.07. std:stringstream](./../../05.advanced/02.streams/07.sstream.md)

</div>
