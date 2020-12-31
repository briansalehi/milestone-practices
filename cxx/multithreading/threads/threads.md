# 06.01.01 creating threads

```cxx
#include <iostream>
#include <thread>
#include <mutex>

// global mutual extension variable
std::mutex cout_mtx;

void worker() {
    cout_mtx.lock();
    std::cout << "starting thread" << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);
    std::thread t3(worker);
    std::thread t4(worker);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}

```

## Output

```txt
starting thread
starting thread
starting thread
starting thread
```

## Comments *[not verified]*

To create threads, you must first include **thread** and **mutex** header files.

This program basically does nothing but printing a string into the output stream.

To write data in stdout stream, we must use *std::cout* which is not thread-safe, so we need to
write a mutex to lock the thread, so that we are sure no other threads are writing to stdout
in the same time.  
To do that, we need to use a global variable named *cout_mtx* or any name of your interest.  
Then we use it to lock each thread before writing data to the output stream.

To create a thread, we define a thread object and pass a pointer to function as its first parameter.  
We can also pass parameters to the worker by passing them in thread parameters as you will see in next practice.

After creating threads, we should use join method to make threads wait for each other after they complete their operations.

To compile your code, you must use **-lpthread** linker option to make thread functions to work.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01. Threads](./../../06.multithreading/01.threads/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.02. passing parameters to threads](./../../06.multithreading/01.threads/02.parameters.md)

</div>
