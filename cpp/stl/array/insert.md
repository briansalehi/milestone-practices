# 03.03.03 inserting element in the middle

```cxx
#include <iostream>
#include <vector>

// use template for type-independency
template <typename T>
void display(const std::vector<T> array) {
    // use auto to reduce code and let compiler deduct the type
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> integers{1,2,3,4,5};
    display(integers);

    // insert an integer in the beginning
    integers.insert(integers.cbegin(), 0);
    display(integers);

    // insert two integers at the end
    integers.insert(integers.cend(), 2, 6);
    display(integers);

    // initialize array with 2 doubles
    std::vector<double> doubles(2, 3.14);
    display(doubles);

    // append another array into doubles
    std::vector<double> another(3, 2.72);
    doubles.insert(doubles.cend(), another.cbegin(), another.cend());
    display(doubles);

    return 0;
}

```

## Output

```txt
1 2 3 4 5 
0 1 2 3 4 5 
0 1 2 3 4 5 6 6 
3.14 3.14 
3.14 3.14 2.72 2.72 2.72 
```

## Comments *[not verified]*

**std::vector** container has few overloaded methods called **insert()** to insert elements anywhere into a vector.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.03.02. inserting element at the end](./../../03.stl/03.array/02.pushback.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.03.04. accessing vector elements using array semantics](./../../03.stl/03.array/04.subscript.md)

</div>
