#include <iostream>
#include <variant>

int main()
{
	std::variant<int, double> var{3.14};

	// invalid attemt to access to index 0
	try {
		std::cout << std::get<0>(var) << std::endl;
	} catch (std::bad_variant_access& exp) {
		std::cout << exp.what() << std::endl;
	}

	// attemt to access to index 1
	try {
		std::cout << std::get<1>(var) << std::endl;
	} catch (std::bad_variant_access& exp) {
		std::cout << exp.what() << std::endl;
	}

	// attemt to access to double by type
	try {
		std::cout << std::get<double>(var) << std::endl;
	} catch (std::bad_variant_access& exp) {
		std::cout << exp.what() << std::endl;
	}

	return 0;
}
