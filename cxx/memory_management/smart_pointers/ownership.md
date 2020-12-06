# 05.01.02 pointers ownership

```cxx
#include <iostream>
#include <memory> // unique_ptr

/* problem

// returned new object will most likely be forgotten to be deleted
int* make(const int number) {
    int* copy = new int(number);
    return copy;
}

*/

std::unique_ptr<int> make(const int number) {
    std::unique_ptr<int> copy(new int(number));
    return copy;
}

int main()
{
    std::unique_ptr<int> number =  make(3);
    std::cout << *number << std::endl;

    return 0;
}

```

## Output

```txt
3
```

## Comments *[not verified]*

**auto_ptr** and **unique_ptr** smart pointers will transfer the object's ownership.
meaning, the pointer will point to an invalid address when it's assigned to another
pointer. and the new pointer will own the object.  

You must carefully use unique_ptr, not to forget that only one pointer will point
to the object's address it points to. that's why its name is unique.

**shared_ptr** instead, won't transfer ownership and will copy to another object (copy
constructor), and it will count the number of pointers that points to the object.
*delete* operator will only be called when last pointer is destroyed.

Use **unique_ptr** when you need to transfer ownership and use **shared_ptr** when
you need to share an object to multiple pointers.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.01.01. std::unique_ptr](./../../05.advanced/01.smart/01.unique_ptr.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.01.03. std::shared_ptr](./../../05.advanced/01.smart/03.shared_ptr.md)

</div>
