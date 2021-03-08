# 05.03.03 throwing a custom exception

```cxx
#include <iostream>
using namespace std;

class Memory {
public:
    Memory (long amount);
    virtual ~Memory ();
    long& operator[] (long index);

private:
    long size; // compiler warning: variables should not be declared after pointers uninitialized! declare pointers for last
    long* memory;
};

Memory::Memory (long amount): size{amount}, memory{NULL} {
    if (size < 0) throw length_error {"invalid size"};
    memory = new long[size];
}

long& Memory::operator[] (long index) {
    if (index < 0 || index > size) throw out_of_range {"out of range"};
    return memory[index];
}

Memory::~Memory () {
    if (memory)
        delete [] memory;
}

int main ()
{
    try {
        Memory x(1); // put a -1 instead to make an invalid array size and see the exception
    }
    catch (length_error& err) {
        cout << err.what() << endl;
    }

    try {
        Memory y(10);
        y[9]; // put 12 to make it an invalid range of array
    }
    catch (out_of_range& err) {
        cout << err.what() << endl;
    }

    try {
        Memory z(0xffff); // put 4 more f to make too large amount of memory
    }
    catch (bad_alloc& err) {
        cout << "not enough space" << endl;
    }

    return 0;
}

```

## Output

no output provided

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [05.03.02. handling exception of a type](./../../05.advanced/03.exception/02.type.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [05.03.04. how exception handling works](./../../05.advanced/03.exception/04.handling.md)

</div>
