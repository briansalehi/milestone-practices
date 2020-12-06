#include <iostream>
#include <memory> // unique_ptr

/* problem:

void function() {
	int* number = new int(3);
	if (number == nullptr) {
		throw("failed to create int");
	}

	// if something bad happens, program flow won't reach to the delete
	// statement and memory will leak delete number;
}

*/
	
void function(std::unique_ptr<int> number) {
	if (number == nullptr) {
		throw("failed to create int");
	}
}

int main()
{
	try {
		/* another problem
			function(std::unique_ptr<int>(new int(3)));

			// if new fails here, memory will still leak
			// always use make_unique to create a unique_ptr
		*/

		function(std::make_unique<int>());

	} catch (const char *exp) {
		std::cout << exp << std::endl;
	} catch (const std::exception &exp) {
		std::cout << exp.what() << std::endl;
	}

	return 0;
}
