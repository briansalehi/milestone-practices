# 01.02.03 *using* keyword

```cxx
#include <iostream>

int main()
{
    // restrict namespace
    using std::cout;
    using std::endl;

    cout << "simplest C++ program ever!" << endl;

    return 0;
}

```

## Output

```txt
simplest C++ program ever!
```

## Comments *[not verified]*

**using** keyword can be used to skip mentioning the namespace before each object belonging to that namespace.

**using** keyword can be used in two different forms:

* using namespace std: this statement will define the entier *std namespace* in a scope
* using std::cout: this restrict namespace will define only the *cout* object belonging to *std namespace* and not the entire namespace

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.02. namespace](./../../01.the_basics/02.the_anatomy/02.namespace.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.04. functions](./../../01.the_basics/02.the_anatomy/04.function.md)

</div>
