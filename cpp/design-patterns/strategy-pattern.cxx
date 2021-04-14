#include "duck.hpp"

int main(int argc, char** argv, char** argenvp)
{
	RubberDuck rubber;
	DecoyDuck decoy;

	rubber.quack();
	rubber.quack();

	return 0;
}
