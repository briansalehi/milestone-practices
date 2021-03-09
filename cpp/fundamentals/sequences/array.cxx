int main()
{
	// only constant literals can be used to define array length
    const unsigned int length = 2;

	// never leave an array uninitialized
    int array[length] = {0};

	// occupy array placeholders with the same type of array
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    return 0;
}
