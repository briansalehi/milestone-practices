#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>

class Clock {
public:
    Clock(boost::asio::io_context& io): m_timer{io, boost::asio::chrono::seconds(1)}, m_counter{0} {
        m_timer.async_wait(boost::bind(&Clock::count, this));
    }

    ~Clock() { std::cout << std::endl; }

    void count() {
        if (m_counter < 5) {
            std::cout << m_counter << " ";
            std::cout.flush();
            ++m_counter;
            m_timer.expires_at(m_timer.expiry() + boost::asio::chrono::seconds(1));
            m_timer.async_wait(boost::bind(&Clock::count, this));
        }
    }

private:
    boost::asio::steady_timer m_timer;
    int m_counter;
};

int main()
{
    boost::asio::io_context io;
    Clock timer(io);
    io.run();
    return 0;
}
