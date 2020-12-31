# 02.01.19 initialization aggregation

```cxx
#include <string>

class Aggregate1 {
public:
    std::string name;
    int number;
};

struct Aggregate2 {
public:
    int length;
    int array[3];
};

int main()
{
    Aggregate1 agg1 = {"Cxx", 11};
    Aggregate2 agg2 = {1, {2,3,4}};

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

You were shortly introduced to **initializer lists** previously.  
The thing is, objects can be initialized by initializer lists.  
We could initialize objects in multiple forms:  

```cxx
Aggregate1 agg1("Cxx", 11);
```

or

```cxx
Aggregate1 agg1;
agg1.name = "Cxx";
agg1.number = 11;
```

But using **initializer lists** we simply put all of the values of different types in one box and set them to an object.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.18. union](./../../02.object_oriented/01.classes&objects/18.union.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.20. constant expression in classes](./../../02.object_oriented/01.classes&objects/20.constexpr.md)

</div>
