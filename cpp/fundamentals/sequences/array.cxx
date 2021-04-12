#include <array>

int main()
{
	// only constant literals can be used to define array length
    const unsigned int length = 3;

	// never leave an array uninitialized
    int array[length] = {0};

	// occupy array placeholders with the same type of array
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

	// get the size of an array using new c++17 function
	int array_size = std::size(array);

    return 0;
}
