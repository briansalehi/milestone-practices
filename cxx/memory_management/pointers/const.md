# 01.08.05 using const on pointers

```cxx
int main()
{
    // the address which the pointer is pointing to, can not be changed
    int days = 30;
    int* const pdays = &days;

    // the value which the pointer is pointing to, can not be changed
    int months = 12;
    const int* pmonths = &months;

    // the most restrict pointer, nothing can be changed
    int weeks = 4;
    const int* const pweeks = &weeks;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

be generious at using **const** whenever it's possible.  
**const** keyword after pointer type makes restriction in changing the pointing address.  
using **const** keyword before pointer type makes restriction in changing the pointing value.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.04. incrementing and decrementing pointers](./../../01.the_basics/08.pointers&references/04.increment&decrement.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.06. passing parameters as pointers](./../../01.the_basics/08.pointers&references/06.passing.md)

</div>
