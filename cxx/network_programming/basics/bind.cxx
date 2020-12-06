#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>

void callback_function(const boost::system::error_code& err, boost::asio::steady_timer* timer, int* counter) {
    if (*counter <= 5) {
        std::cout << *counter << " ";
        std::cout.flush();
        ++(*counter);
        timer->expires_at(timer->expiry() + boost::asio::chrono::seconds(1));
        timer->async_wait(boost::bind(callback_function, boost::asio::placeholders::error, timer, counter));
    }
}

int main()
{
    boost::asio::io_context io;
    int counter = 1;
    boost::asio::steady_timer timer(io, boost::asio::chrono::seconds(1));
    timer.async_wait(boost::bind(callback_function, boost::asio::placeholders::error, &timer, &counter));
    io.run();
    std::cout << std::endl;
    return 0;
}
