#include <iostream>
#include <boost/random/random_device.hpp>
#include <boost/random/uniform_int_distribution.hpp>

int main()
{
	boost::random::random_device seed;
	boost::random::uniform_int_distribution<> random_generator(0, 10);
	int random = random_generator(seed);

	std::cout << "Enter a random: ";
	int number;
	std::cin >> number;

	if (number == random)
		std::cout << "Matched!" << std::endl;
	else
		std::cout << "Not matched" << std::endl;

	return 0;
}
