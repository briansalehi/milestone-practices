#include <iostream>

int main()
{
	std::cout << "How much memory do you need? ";

    try {
        int size;
		std::cin >> size; // type -1 to see the error
		std::cout << size << std::endl;
        
        char* letter = new char[size];
        delete [] letter;
    }
    catch (...) { // ... means catch all exceptions
		std::cout << "Exception caught" << std::endl;
    }
    
    return 0;
}
