# 05.03.06 inheriting from std::exception class

```cxx
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class customException: public exception {
private:
    string reason;

public:
    customException (const char* why): reason(why) {}

    virtual const char* what () const throw() {
        return reason.c_str();
    }
};

const double Divide (const int& dividen, const int& divisor) {
    if (divisor == 0)
        throw customException ("dividing by zero is a crime");

    return (dividen / divisor);
}

int main ()
{
    int dividen = 0;
    int divisor = 0;

    cout << "Enter dividen and divisor: ";
    cin >> dividen >> divisor;
    cout << dividen << " " << divisor << endl;

    try {
        cout << "result: " << Divide (dividen, divisor) << endl;
    }
    catch (const customException& exp) {
        cout << "Exception: " << exp.what () << endl;
    }

    return 0;
}
```

## Input

```txt
3 0
```

## Output

```txt
Enter dividen and divisor: 3 0
result: Exception: dividing by zero is a crime
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03.05. std::exception](./../../05.advanced/03.exception/05.exception.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.04. Logging &lpar;incomplete&rpar;](./../../05.advanced/04.logging/README.md)

</div>
