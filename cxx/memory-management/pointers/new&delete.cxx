#include <iostream>

int main()
{
	// allocates memory in size of an int
	int *number;
	number = new int(2);

	std::cout << number << std::endl;

	// you must delete a pointer allocated by new after use
	delete number;
	// it is best practice to set null pointer to the deallocated pointer
	number = nullptr;

	return 0;
}
