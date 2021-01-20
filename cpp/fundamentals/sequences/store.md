# 01.04.02 modifying array

```cxx
int main()
{
    const int length = 2; // array length must be a constant
    int array[length] = {0}; // never leave an array uninitialized

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**Note:** when arrays are declared and left uninitialized, they hold garbage data as their values.
It is best practice to always initialize an array with zero. In case of initializing an array with
an initializer list, all of its elements will be assigned to zero.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.04.01. array](./../../01.the_basics/04.arrays&strings/01.array.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.04.03. multidimentional array](./../../01.the_basics/04.arrays&strings/03.multidimensional.md)

</div>
