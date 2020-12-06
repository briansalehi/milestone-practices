#include <iostream>
#include <assert.h>

int main()
{
    // assign nullptr to array and see how assertion fails
    char* array = new char[25];
    // array = nullptr;
    assert(array != nullptr);

    delete [] array;
    return 0;
}
