# 05.01.03 std::shared_ptr

```cxx
#include <memory>

int main()
{
    std::shared_ptr<int> number(new int(3));

    // now number and pointer both point to one location
    std::shared_ptr<int> pointer = number;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Shared pointers, will copy the address and ownership of the pointed object.  
This makes them useful when you want a few pointers point to one location.  
**delete** operator will be called when the last pointer is destroyed.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.01.02. pointers ownership](./../../05.advanced/01.smart/02.ownership.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.01.04. std::move](./../../05.advanced/01.smart/04.std-move.md)

</div>
