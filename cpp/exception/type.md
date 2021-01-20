# 05.03.02 handling exception of a type

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
    catch (std::bad_alloc& exp) { // ... means catch all exceptions
        cout << "Exception occured: " << exp.what() << endl;
    }
    catch (...) { // you can insert as many catch as you want
        cout << "Exception occured: unknown error";
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
Exception occured: std::bad_alloc
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03.01. exception safety with try-catch](./../../05.advanced/03.exception/01.catch.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03.03. throwing a custom exception](./../../05.advanced/03.exception/03.throw.md)

</div>