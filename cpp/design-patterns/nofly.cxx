#include "nofly.hpp"
#include <iostream>

NoFly::NoFly()
{
}

void NoFly::fly() const override
{
	std::cout << "Does not fly" << std::endl;
}
