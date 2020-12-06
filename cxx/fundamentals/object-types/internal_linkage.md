# 01.03.05 internal linkage

```cxx
// global scope, internal linkage, can be accessed only in this file
static int one = 1;

int main()
{
    int two = one * 2;

    return 0;
}

/* file2

// error: variable one cannot be accessed in another file
int three = one * 3;

*/

```

## Output

no output provided

## Comments *[not verified]*

Using **static** keyword, will make a variable globally accessible only in the file it was declared.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.04. external linkage](./../../01.the_basics/03.variables&constants/04.external_linkage.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.06. no linkage](./../../01.the_basics/03.variables&constants/06.no_linkage.md)

</div>
