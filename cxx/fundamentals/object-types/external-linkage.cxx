// global scope, external linkage, definition because of initialization
extern int number = 3;

int main()
{
    return 0;
}

/* file2

// global scope, external linkage, no definition because of use
extern int number;

// use number here...

*/
