#include <iostream>
#include <exception>

void function()
{
	try {
		throw("An exception");
	// thrown exception of type const char* doesn't have std::exception as base
	} catch (std::exception& exp) {
		std::cout << "Exception caught in function" << std::endl;
	}
}

int main ()
{
    try {
		function();
    }
    catch (const char* reason) {
		// main will continue like there was no exception thrown in first place
		std::cout << "Exception caught in main: " << reason << std::endl;
    }

	std::cout << "No exception was thrown!" << std::endl;

    return 0;
}
