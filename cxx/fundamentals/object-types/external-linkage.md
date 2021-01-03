# 01.03.04 external linkage

```cxx
// global scope, external linkage, definition because of initialization
extern int number = 3;

int main()
{
    return 0;
}

/* file2

// global scope, external linkage, no definition because of use
extern int number;

// use number here...

*/

```

## Output

no output provided

## Comments *[not verified]*

Variables can be shared between different files of the same project by **extern** keyword.  
External variables must be declared in each file before use, and it must be initialized only once in only one file.  
To use an external variable in files other than the one it was initialized, you must declare it using **extern** keyword but with no initialization.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.03. global variables](./../../01.the_basics/03.variables&constants/03.global.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.05. internal linkage](./../../01.the_basics/03.variables&constants/05.internal_linkage.md)

</div>
