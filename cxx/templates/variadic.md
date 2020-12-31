# 02.06.11 variable or variadic templates

```cxx
#include <iostream>
#include <string>

template <typename result_t, typename parameter_t>
void sum(result_t& result, parameter_t& parameter) {
    result += parameter;
}

// variadic template, so cooool!
template <typename result_t, typename parameter_t, typename ...rest_t>
void sum(result_t& result, parameter_t& parameter, rest_t ...rest) {
    result += parameter;
    return sum(result, rest...);
}

int main()
{
    std::string message;
    sum(message, "Cxx ", "programming ", "is ", "so ", "cool");
    std::cout << message << std::endl;

    return 0;
}

```

## Output

```txt
Cxx programming is so cool
```

## Comments *[not verified]*

**Variadic Templates** are a way to support dynamic parameter length.  
Meaning that a function can have 2, 3 or more parameters each time we call it.  
There are two parts of a variadic template, one accepts multiple parameters and another only accepts two parameters. the execution will reach to second one when there are no more parameters to parse.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.10. template specialization](./../../02.object_oriented/06.templates/10.special.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.12. *tuples*](./../../02.object_oriented/06.templates/12.tuples.md)

</div>
