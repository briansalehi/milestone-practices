#include <iostream>
#include <boost/thread.hpp>
#include <boost/chrono.hpp>

int main()
{
	std::cout << "output 1" << std::endl;
	boost::thread::sleep_for(boost::chrono::milliseconds(1000));
	std::cout << "output 2" << std::endl;

	return 0;
}
