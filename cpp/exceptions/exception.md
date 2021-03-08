# 05.03.05 std::exception

```cxx
#include <iostream>
#include <exception>
using namespace std;

int main ()
{
    cout << "Enter array length (-1): ";
    
    try {
        int length = 0;
        cin >> length;
        cout << length << endl;

        int* numbers = new int [length];
        delete [] numbers;
        cout << "deallocated array" << endl;
    }
    catch (std::exception& exp) { // exception base class will catch all exceptions
        cout << "Exception: " << exp.what() << endl;
    }

    return 0;
}
```

## Input

```txt
-1
```

## Output

```txt
Enter array length (-1): -1
Exception: std::bad_array_new_length
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03.04. how exception handling works](./../../05.advanced/03.exception/04.handling.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03.06. inheriting from std::exception class](./../../05.advanced/03.exception/06.inherit.md)

</div>
