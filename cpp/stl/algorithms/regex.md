# 04.03.19 regex

```cxx
#include <iostream>
#include <regex>

void search(std::string& sentence) {
    std::regex pattern(R"(\w{2}\s*\d{5}(-\d{4})?)");
    std::smatch matches;
    std::cout << "sentence: " << sentence << std::endl;

    if (std::regex_search(sentence, matches, pattern)) {
        std::cout << "zipcode pattern matched: " << matches[0] << std::endl;
    }
    else {
        std::cout << "no zipcode found!" << std::endl;
    }
}

int main()
{
    std::string postal_code("TX 12345-6789");
    search(postal_code); 

    return 0;
}

```

## Output

```txt
sentence: TX 12345-6789
zipcode pattern matched: TX 12345-6789
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.18. tuple](./../../04.more_stl/03.algorithms/18.tuple.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.20. std::set_union&lpar;&rpar;](./../../04.more_stl/03.algorithms/20.set_union.md)

</div>
