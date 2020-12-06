# 05.02.05 append into the end of file

```cxx
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // write-only
    std::fstream wfile;
    wfile.open("file.tmp", std::ios_base::out | std::ios_base::trunc);

    if (wfile.is_open()) {
        wfile << "this string goes into the file" << std::endl;
        wfile.close();
    }

    // append
    wfile.open("file.tmp", std::ios_base::out | std::ios_base::app);

    if (wfile.is_open()) {
        wfile << "this string will be appended into the end of the file" << std::endl;
        wfile.close();
    }

    // read-only
    std::fstream rfile;
    rfile.open("file.tmp", std::ios_base::in);
    
    if (rfile.is_open()) {
        std::cout << "reading the contents of file.tmp" << std::endl;
        std::string content;
        while (rfile.good()) {
            getline(rfile, content);
            std::cout << content << std::endl;
        }
        rfile.close();
    }

    return 0;
}

```

## Output

```txt
reading the contents of file.tmp
this string goes into the file
this string will be appended into the end of the file

```

## Comments *[not verified]*

To write data at the end of a file, use **std::ios_base::app** object in *fstream* header file.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.04. std::fstream](./../../05.advanced/02.streams/04.fstream.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.06. binary files](./../../05.advanced/02.streams/06.binary.md)

</div>
