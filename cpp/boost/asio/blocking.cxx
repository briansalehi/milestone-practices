#include <iostream>
#include <boost/asio.hpp>

int main()
{
	boost::asio::io_service ios;
	boost::asio::io_service::work work(ios);
	ios.run();
	std::cout << "We should not see this line due to run blocking program" << std::endl;
	return 0;
}
