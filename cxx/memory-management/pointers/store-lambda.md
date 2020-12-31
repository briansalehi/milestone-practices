# 01.08.14 storing callable objects

```cxx
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>

std::function<void(const int&)> lambda = [](const int& element) {
    std::cout << element << " ";
};

int main()
{
    std::vector<int> container = {1,2,3,4,5};
    for_each(container.cbegin(), container.cend(), lambda);
    std::cout << std::endl;

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
```

## Comments *[not verified]*

**lambdas** can also be stored using **std::function()** template function in **functional** header file.  
**std::function\<ret_t(par_t)\>()** stores callable objects like lambdas, and it's a template function,
having the type of callable object signature.  
The signature indicates \<return-type (parameters_type,...)\>, if callable object returns nothing like this lambda, void is used followed by the parametes types.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.13. function pointer](./../../01.the_basics/08.pointers&references/13.function_pointer.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02. Object Oriented C++ Programming](./../../02.object_oriented/README.md)

</div>
