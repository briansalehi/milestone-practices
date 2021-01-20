#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

int main()
{
	boost::random::mt19937 seed;
	boost::random::uniform_int_distribution<> random_generator(0, 10);
	int random = random_generator(seed);

	std::cout << "Take your shot: ";
	int number;
	std::cin >> number;

	if (number == random)
		std::cout << "You guessed it right!" << std::endl;
	else
		std::cout << "You guessed it wrong!" << std::endl;

	return 0;
}
