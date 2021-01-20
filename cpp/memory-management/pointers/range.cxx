#include <iostream>

int main()
{
    // pointer to array
    int *pointer = new int[10];

    // pointers initialized by new, must be deleted by [] operator
    delete [] pointer;

    // pointer can be used again
    pointer = new int[5];
    delete [] pointer;

    return 0;
}
