#include <iostream>
#include <boost/asio.hpp>

int main()
{
    boost::asio::io_context io;
    boost::asio::steady_timer timer(io, boost::asio::chrono::seconds(1));
    timer.wait();
    std::cout << "slept for 1 second" << std::endl;
    return 0;
}
