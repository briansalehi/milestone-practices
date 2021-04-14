#pragma once
#include "duck.hpp"

class RubberDuck : protected Duck
{
public:
	RubberDuck();
	void fly() const;
	void quack() const;
};
