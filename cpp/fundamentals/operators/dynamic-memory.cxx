#include <exception>

int main()
{
	try {
		int *number = new int(2);
		int *array = new int[5];

		*number = 4;
		array[0] = 1;

		// check for pointer availability before delete
		if (array) {
			delete [] array;
		}

		if (number) {
			delete number;
		}
	}
	catch (std::bad_alloc &exp) {
	}

	return 0;
}
