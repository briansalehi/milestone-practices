#include <iostream>
#include <boost/asio.hpp>

int main()
{
	boost::asio::io_service ios;
	ios.run();
	std::cout << "if reached this line, program is not blocked" << std::endl;
	return 0;
}
