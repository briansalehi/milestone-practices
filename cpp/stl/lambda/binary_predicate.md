# 04.02.05 lambda as binary predicate

```cxx
#include <algorithm>
#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::deque<std::string> names{"Tom","jack","Penny","alana","rick","Brian"};

    // sort container
    sort(
        names.begin()
        , names.end()
        , [](const std::string& nameA, const std::string& nameB) -> bool {
            std::string lowerA(nameA);
            transform(nameA.begin(),nameA.end(),lowerA.begin(),::tolower);

            std::string lowerB(nameB);
            transform(nameB.begin(),nameB.end(),lowerB.begin(),::tolower);

            return (lowerA < lowerB);
        }
    );

    // display container
    for_each(
        names.cbegin()
        , names.cend()
        , [](const std::string& element){ std::cout << element << std::endl; }
    );

    return 0;
}

```

## Output

```txt
alana
Brian
jack
Penny
rick
Tom
```

## Comments *[not verified]*

Making a lambda do a binary predicate task is easy but we need to behave lambda functions carefully,
they may have overhead when they grow in size.  
Notice how we clarified the return type of lambda function, using -\> operator, we can restrict the return type of a lambda function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.02.04. lambda as binary function](./../../04.more_stl/02.lambda/04.binary_function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03. STL Algorithms](./../../04.more_stl/03.algorithms/README.md)

</div>
