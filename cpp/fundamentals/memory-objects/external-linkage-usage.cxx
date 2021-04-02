#include "external-linkage-usage.hpp"

extern int number; // no initialization, only declaration and usage

void display()
{
	std::cout << number << std::endl;
}
