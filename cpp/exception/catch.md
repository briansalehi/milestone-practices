# 05.03.01 exception safety with try-catch

```cxx
#include <iostream>
using namespace std;

int main ()
{
    cout << "how much memory do you need? ";
    try {
        int size;
        cin >> size; // type -1 to see the error
        cout << size << endl;
        
        char* letter = new char [size];
        delete [] letter;
    }
    catch (...) { // ... means catch all exceptions
        cout << "Exception occured" << endl;
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
how much memory do you need? -1
Exception occured
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03. Exception Handling](./../../05.advanced/03.exception/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03.02. handling exception of a type](./../../05.advanced/03.exception/02.type.md)

</div>
