#include <iostream>

#define SAMPLE_H

#ifdef SAMPLE_H
void function()
{
	std::cout << "defined" << std::endl;
}
#else
void function()
{
	std::cout << "undefined" << std::endl;
}
#endif

int main()
{
	function();
	return 0;
}
