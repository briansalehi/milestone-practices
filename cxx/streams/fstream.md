# 05.02.04 std::fstream

```cxx
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    // read and write, trunc creates file if not exists or already does
    fstream rwfile;
    rwfile.open ("file.temp", ios_base::in|ios_base::out|ios_base::trunc);

    if (rwfile.is_open ()) {
        rwfile << "This is a sample file" << endl;
        rwfile << "to demonstrate how C++ reads a file" << endl;
        rwfile << "and learn iterating through lines" << endl;
        rwfile << "using files is an interesting topic" << endl;
        rwfile.close();
    }

    // read-only file
    ifstream rfile;
    rfile.open ("file.temp", ios_base::in);
    
    if (rfile.is_open ()) {
        // read file line by line
        string fileline;
        while (rfile.good()) {
            getline (rfile, fileline);
            cout << fileline << endl;
        }
        rfile.close();
    }

    // write-only file
    ofstream wfile;
    wfile.open ("file.temp", ios_base::out);
    
    if (wfile.is_open ())
        wfile.close();

    return 0;
}
```

## Output

```txt
This is a sample file
to demonstrate how C++ reads a file
and learn iterating through lines
using files is an interesting topic

```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.03. *std::cin* and *std::getline*](./../../05.advanced/02.streams/03.cin.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.05. append into the end of file](./../../05.advanced/02.streams/05.append.md)

</div>
