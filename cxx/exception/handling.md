# 05.03.04 how exception handling works

```cxx
#include <iostream>
using namespace std;

struct ClassB {
    ClassB () { cout << "Class B constructor" << endl; }
    ~ClassB () { cout << "Class B destructor" << endl; }
};

struct ClassA {
    ClassA () { cout << "Class A constructor" << endl; }
    ~ClassA () { cout << "Class A destructor" << endl; }
};

void funcB () {
    cout << "function B invoked" << endl;
    ClassA a;
    ClassB b;
    throw ("Exception thrown from B"); // no catch for this throw in function B
}

void funcA () {
    cout << "function A invoked" << endl;
    try {
        ClassA a;
        ClassB b;
        funcB ();
    }
    catch (const char* exp) { // nearest catch to thrown exception B is catch A
        cout << "Exception catched in A" << endl;
        cout << exp << endl;
    }
}

int main ()
{
    try {
        funcA ();
    }
    catch (const char* exp) { // main will continue like there was no problem
        cout << "Exception occured in main()" << endl;
        cout << exp << endl;
    }

    cout << "All good in main()" << endl;

    return 0;
}
```

## Output

```txt
function A invoked
Class A constructor
Class B constructor
function B invoked
Class A constructor
Class B constructor
Class B destructor
Class A destructor
Class B destructor
Class A destructor
Exception catched in A
Exception thrown from B
All good in main()
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03.03. throwing a custom exception](./../../05.advanced/03.exception/03.throw.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03.05. std::exception](./../../05.advanced/03.exception/05.exception.md)

</div>
