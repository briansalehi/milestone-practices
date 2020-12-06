# 04.01.04 binary predicate

```cxx
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// generic display function
template <typename printable>
void Display(const printable& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << std::endl;
    }
    std::cout << std::endl;
}

// compare std::strings binary predicate
struct iSort {
    bool operator() (const std::string& str1, const std::string& str2) const {
        std::string lower1;
        lower1.resize(str1.size());
        transform(str1.begin(), str1.end(), lower1.begin(), ::tolower);

        std::string lower2;
        lower2.resize(str2.size());
        transform(str2.begin(), str2.end(), lower2.begin(), ::tolower);

        return (lower1 < lower2);
    }
};

int main()
{
    // unsorted names
    std::vector<std::string> names;
    names.push_back("Kevin");
    names.push_back("Brian");
    names.push_back("rick");
    names.push_back("Vladimir");
    names.push_back("jack");
    names.push_back("frank");
    Display(names);

    // sorted by default predicate
    sort(names.begin(), names.end());
    Display(names);

    // sorted by custom predicate
    sort(names.begin(), names.end(), iSort());
    Display(names);

    return 0;
}

```

## Output

```txt
Kevin
Brian
rick
Vladimir
jack
frank

Brian
Kevin
Vladimir
frank
jack
rick

Brian
frank
jack
Kevin
rick
Vladimir

```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.01.03. binary function](./../../04.more_stl/01.function_object/03.binary_function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.02. Lambda Expressions](./../../04.more_stl/02.lambda/README.md)

</div>
