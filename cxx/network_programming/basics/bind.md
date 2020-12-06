# 09.01.03 binding arguments to a handler

```cxx
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

```

## Output

```txt
1 2 3 4 5 
```

## <span title="References: https://www.boost.org/doc/libs/1_70_0/doc/html/boost_asio/tutorial/tuttimer3.html">Comments</span>

In this excercise we write a program that the timer fires once a second.
This will show how to pass additional parameters to your handler function.

To implement a repeating timer using asio you need to change the timer's **expiry time** in your callback function,
and then start a new asynchronous wait.
Obviously this means that the callback function will need to be able to access the timer object.  
To this end we add two new parameters to the *callback_function*.

* A pointer to a timer object.
* A counter so that we can stop the program when the timer fires for the sixth time.

Next we move the **expiry time** for the timer along by one second from the previous expiry time.
By calculating the new expiry time relative to the old, we can ensure that the timer does not
drift away from the whole-second mark due to any delays in processing the handler.

Then we start a new asynchronous wait on the timer.
As you can see, the **boost::bind()** function is used to associate the extra parameters with your callback handler.
The **steady_timer::async_wait()** function expects a handler function
(or function object) with the signature **void(const boost::system::error_code&)**.
Binding the additional parameters converts your *callback_function* into a function object that matches the signature correctly.

See the [Boost.Bind documentation](https://www.boost.org/libs/bind/bind.html) for more information on how to use boost::bind().

In this example, the **boost::asio::placeholders::error** argument to **boost::bind()**
is a named placeholder for the error object passed to the handler.
When initiating the asynchronous operation, and if using **boost::bind()**,
you must specify only the arguments that match the handler's parameter list.
In next exercises you will see that this placeholder may be elided if the parameter is not needed by the callback handler.

A new count variable is added so that we can stop the program when the timer fires for the sixth time.

Then, when making the call to **steady_timer::async_wait()** from main we bind the additional parameters needed for the print function.

Finally, just to prove that the count variable was being used in the print handler function, we will print out its new value.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [09.01.02. using a timer asynchronously](./../../09.network_programming/01.basics/02.async_wait.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [09.01.04. using a member function as a handler](./../../09.network_programming/01.basics/04.member.md)

</div>
