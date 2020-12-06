# 05.02.16 random access read-write

```cxx
#include <iostream> // I/O
#include <fstream> // fstream
#include <string> // string
#include <cstdlib> // exit

int main()
{
    
    std::fstream storage;
    storage.open("file.dat", std::ios_base::in | std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);

    if (!storage.is_open()) {
        std::cerr << "failed to open file.dat\n";
        exit(EXIT_FAILURE);
    }

    char message[] = "this is a binary file";
    std::cout << "message: " << message << std::endl;
    storage.write(reinterpret_cast<const char*>(&message), sizeof(message));

    unsigned long index;
    std::cout << "index: ";
    std::cin >> index;
    while (index < 0 || index > sizeof(message)-1) {
        std::cout << "enter an index in a range of " << 0 << " to " << sizeof(message)-1 << ": ";
        std::cin >> index;
    }

    std::streampos position = (index - 1) * sizeof(char);
    storage.seekg(position);
    char character;
    storage.read(reinterpret_cast<char*>(&character), sizeof(character));
    std::cout << "character: " << character << std::endl;

    storage.close();
    storage.clear();
    return 0;
}

```

## Input

```txt
3

```

## Output

```txt
message: this is a binary file
index: character: i
```

## Comments *[not verified]*

You can have random access to data of a file using **seekg()** for input file (seek get),
and **seekp()** function for output file (seek put).  
Both functions get parameter type of **std::streampos** class.  
To calculate the position of a data, you must multiply a type of *long* to the sizeof single data
written in that file. That is, working file must contain a sequence of similar data type.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.15. fill function](./../../05.advanced/02.streams/15.fill.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02.17. temporary files](./../../05.advanced/02.streams/17.temporary-files.md)

</div>
