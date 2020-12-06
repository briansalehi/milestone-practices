# 09.01.01 using a timer synchronously

```cxx
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

```

## Output

```txt
slept for 1 second
```

## <span title="References: https://www.boost.org/doc/libs/1_70_0/doc/html/boost_asio/tutorial/tuttimer1.html">Comments</span>

All programs that use asio need to have at least one **io_context** object.
This class provides access to I/O functionality.
We declare an object of this type first thing in the main function.

Next we declare an object of type **boost::asio::steady_timer**.
The core asio classes that provide I/O functionality (or as in this case timer functionality)
always take a reference to an io_context as their first constructor argument.
The second argument to the constructor sets the timer to expire 5 seconds from now.

In this simple example we perform a blocking wait on the timer.
That is, the call to **steady_timer::wait()** will not return until the timer has expired,
5 seconds after it was created (i.e. not from when the wait starts).

A timer is always in one of two states: "expired" or "not expired".
If the **steady_timer::wait()** function is called on an expired timer, it will return immediately.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [09.01. basics](./../../09.network_programming/01.basics/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [09.01.02. using a timer asynchronously](./../../09.network_programming/01.basics/02.async_wait.md)

</div>
