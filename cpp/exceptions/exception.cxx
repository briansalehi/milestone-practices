#include <iostream>
#include <exception>

int main()
{
	std::cout << "Enter array length (-1): ";
    
    try {
        int length = 0;
		std::cin >> length;
		std::cout << length << std::endl;

        int* numbers = new int[length];
        delete [] numbers;
		std::cout << "Deallocated array" << std::endl;
    } catch (std::bad_alloc& exp) { // specific exception object
		std::cout << "Bad Allocation: " << exp.what() << std::endl;
	} catch (std::exception& exp) { // exception base class will catch all exceptions
		std::cout << "Exception: " << exp.what() << std::endl;
    }

    return 0;
}
