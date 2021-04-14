#include "noquack.hpp"
#include <iostream>

NoQuack::NoQuack()
{
}

void NoQuack::quack() const override
{
	std::cout << "Does not quack" << std::endl;
}
