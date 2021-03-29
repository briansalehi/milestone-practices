#include <assert.h>

int main()
{
    int* array = nullptr;
    assert(array != nullptr);
    delete [] array;
    return 0;
}
