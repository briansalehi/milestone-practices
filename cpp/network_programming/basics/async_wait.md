# 09.01.02 using a timer asynchronously

```cxx
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

```

## Output

```txt
something to print
```

## <span title="References: https://www.boost.org/doc/libs/1_70_0/doc/html/boost_asio/tutorial/tuttimer2.html">Comments</span>

This exercise program demonstrates how to use asio's asynchronous callback functionality.  
Using asio's asynchronous functionality means having a callback function that will be called
when an asynchronous operation completes.
In this program we define a function called print
to be called when the asynchronous wait finishes.  
Next, instead of doing a blocking wait we call the **steady_timer::async_wait()**
function to perform an asynchronous wait.
When calling this function we pass the print callback handler that was defined above.  
Finally, we must call the **io_context::run()** member function on the io_context object.  
The asio library provides a guarantee that callback handlers will only be called from
threads that are currently calling **io_context::run()**.
Therefore unless the **io_context::run()** function is called the callback for
the asynchronous wait completion will never be invoked.  
The **io_context::run()** function will also continue to run while there is still
"work" to do. In this example, the work is the asynchronous wait on the timer,
so the call will not return until the timer has expired and the callback has completed.  
It is important to remember to give the io_context some work to do before calling
**io_context::run()**. For example, if we had omitted the above call to
**steady_timer::async_wait()**, the io_context would not have had any work to do,
and consequently **io_context::run()** would have returned immediately.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [09.01.01. using a timer synchronously](./../../09.network_programming/01.basics/01.io_context.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [09.01.03. binding arguments to a handler](./../../09.network_programming/01.basics/03.bind.md)

</div>
