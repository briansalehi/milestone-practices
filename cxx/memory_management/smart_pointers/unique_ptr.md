# 05.01.01 std::unique_ptr

```cxx
#include <iostream>
#include <memory> // unique_ptr

/* problem:

void function() {
    int* number = new int(3);
    if (number == nullptr) {
        throw("failed to create int");
    }

    // if something bad happens, program flow won't reach to the delete statement and memory will leak
    delete number;
}

*/
    
// solution
void function() {
    std::unique_ptr<int> number(new int(3));
    if (number == nullptr) {
        throw("failed to create int");
    }
    // delete is no longer needed
}

int main()
{
    try {
        function();
    }
    catch (const char* exp) {
        std::cout << exp << std::endl;
    }

    return 0;
}

```

## Output

no output provided

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.01. Smart Pointers](./../../05.advanced/01.smart/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.01.02. pointers ownership](./../../05.advanced/01.smart/02.ownership.md)

</div>
