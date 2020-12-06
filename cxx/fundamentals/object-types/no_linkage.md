# 01.03.06 no linkage

```cxx
void function() {
    // only accessible in function block, local scope but statically always exists in memory
    static int number = 3;
}

int main()
{
    function();

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Variables declare within the blocks using **static** keyword, are only accessible in that block, though they exist in memory during the program's lifetime.
Static variables with no linkage can be used to store informations of a function that should still exist even when that function is not initialized. Counting how many times a function has been called can be a good example.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.05. internal linkage](./../../01.the_basics/03.variables&constants/05.internal_linkage.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.07. overflow](./../../01.the_basics/03.variables&constants/07.overflow.md)

</div>
