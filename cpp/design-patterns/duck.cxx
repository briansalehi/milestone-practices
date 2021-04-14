#include "duck.hpp"

Duck::Duck()
{
}

void Duck::fly()
{
	flyBehavior.fly();
}

void Duck::quack()
{
	quackBehavior.quack();
}
