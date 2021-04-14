#pragma once

class Duck
{
public:
	Duck();
	void fly();
	void quack();
	virtual void display() = 0;

protected:
	FlyBehavior flyBehavior;
	QuackBehavior quackBehavior;
};
