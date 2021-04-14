#pragma once

class NoQuack: protected QuackBehavior
{
public:
	NoQuack();
	void quack const;
};
