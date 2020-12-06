#include <iostream>
#include <boost/asio.hpp>

// error_code must be const otherwise compiler throws error
void callback_function(const boost::system::error_code& ) {
    std::cout << "something to print" << std::endl;
}

int main()
{
    boost::asio::io_context io;
    boost::asio::steady_timer timer(io, boost::asio::chrono::seconds(1));
    timer.async_wait(callback_function);
    io.run();
    return 0;
}
