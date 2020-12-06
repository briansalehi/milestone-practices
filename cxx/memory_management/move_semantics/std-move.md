# 05.01.04 std::move

```cxx
#include <iostream>
#include <memory> // unique_ptr

int main ()
{
    std::unique_ptr<char> alphabet(new char);
    *alphabet = 'a';

    // if you ever needed to capture a unique pointer in lambda, use std::move
    auto lambda = [capture = std::move (alphabet)] { std::cout << *capture << std::endl; };

    lambda();
    return 0;
}

```

## Output

```txt
a
```

## Comments *[not verified]*

smart pointers cannot be used in lambda functions unless you move them by **std::move** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.01.03. std::shared_ptr](./../../05.advanced/01.smart/03.shared_ptr.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.02. Streams](./../../05.advanced/02.streams/README.md)

</div>
