int main()
{
    const int length = 2; // array length must be a constant
    int array[length] = {0}; // never leave an array uninitialized

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;

    return 0;
}
