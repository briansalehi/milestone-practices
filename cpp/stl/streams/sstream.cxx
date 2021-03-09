#include <iostream>
#include <sstream>
#include <string>

int main()
{
    int number = 10;
	std::cout << "Integer representation: " << number << std::endl;

	std::stringstream convertable;
    convertable << number;

	std::string numeric;
    convertable >> numeric;
	std::cout << "String representation: " << numeric << std::endl;

    return 0;
}
