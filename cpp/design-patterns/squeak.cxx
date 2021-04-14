#include "squeack.hpp"
#include <iostream>

Squeack::Squeack()
{
}

void Squeack::quack() const override
{
	std::cout << "Squeack!" << std::endl;
}
