// global scope, internal linkage, can be accessed only in this file
static int one = 1;

int main()
{
    int two = one * 2;

    return 0;
}

/* file2

// error: variable one cannot be accessed in another file
int three = one * 3;

*/
