# 05.02.17 temporary files

```cxx
#include <iostream>
#include <cstdio>

int main()
{
    std::cout << "my system can generate " << TMP_MAX
              << " temporary files with " << L_tmpnam
              << " characters long name\n";

    char tempfile[L_tmpnam] = {'\n'};
    for (int index = 0; index < 3; ++index) {
        mkstemp(tempfile);
        std::cout << tempfile << std::endl;
    }

    return 0;
}

```

## Output

```txt
my system can generate 238328 temporary files with 20 characters long name






```

## Comments *[not verified]*

In many programs, you will need to generate temporary files.  
Some books might suggest to use **tmpnam()** function, but it's depricated and dangerious!  
Use **mkstemp()** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.02.16. random access read-write](./../../05.advanced/02.streams/16.random-access.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03. Exception Handling](./../../05.advanced/03.exception/README.md)

</div>
