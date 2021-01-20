# 02.04.09 function operator

```cxx
#include <iostream>
#include <string>

class Message {
public:
    void operator() (const std::string& msg) const {
        std::cout << msg << std::endl;
    }
};

int main()
{
    Message msg;
    msg("Cxx programming");
}

```

## Output

```txt
Cxx programming
```

## Comments *[not verified]*

Using **const** as many as possible is a best practice. be generous using in it.  
operator **()** can be overloaded to make an object act like a function. Why an object might need this feature is totally up to you.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.08. subscript operator](./../../02.object_oriented/04.operators/08.subscript.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.10. move operators](./../../02.object_oriented/04.operators/10.move.md)

</div>
