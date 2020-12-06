# 09.01.04 using a member function as a handler

```cxx
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

```

## Output

```txt
0 1 2 3 4 
```

## <span title="References: https://www.boost.org/doc/libs/1_70_0/doc/html/boost_asio/tutorial/tuttimer4.html">Comments</span>

In this exercise we will see how to use a class member function as a callback handler.
The program should execute identically to the previous practice page.

Instead of defining a free function as the callback handler,
as we did in the earlier practice,
we now define a class called Clock.

The constructor of this class will take a reference to the io-context object and use it when initialising the **m_timer** member.
The **m_counter** used to shut down the program is now also a member of the class.

The **boost::bind()** function works just as well with class member functions as with free functions.
Since all non-static class member functions have an implicit **this** parameter,
we need to bind this to the function. As in previous practice,
**boost::bind()** converts our callback handler (now a member function) into a function object
that can be invoked as though it has the signature **void(const boost::system::error_code&)**.

You will note that the **boost::asio::placeholders::error** placeholder is not specified here,
as the **count()** member function does not accept an error object as a parameter.

In the class destructor we will print out the final newline character.

The **count()** member function is very similar to the **callback_function()** from previous exercise,
except that it now operates on the class data members instead of having the timer and counter passed in as parameters.

The main function is much simpler than before,
as it now declares a local Clock object before running the io-context as normal.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [09.01.03. binding arguments to a handler](./../../09.network_programming/01.basics/03.bind.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [10. Image Processing &lpar;incomplete&rpar;](./../../10.image_processing/README.md)

</div>
