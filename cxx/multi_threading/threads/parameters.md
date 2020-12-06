# 06.01.02 passing parameters to threads

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker(unsigned int thread_id) {
    cout_mtx.lock();
    std::cout << "starting thread " << thread_id << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    std::thread t3(worker, 3);
    std::thread t4(worker, 4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}

```

## Output

```txt
starting thread 1
starting thread 2
starting thread 3
starting thread 4
```

## Comments *[not verified]*

It's possible to pass parameters to a new thread.
These parameter values have to be **move constructible**,
which means that it's a type which has a move or copy constructor (called for rvalue references).

Notice the orders of thread execution. They are obviously running asynchronously.

Any returned value from workers to thread constructors are ignored. unless we use some sort of shared variables or use inter-thread synchronization like mutexes. We will have these difficulties soon enough.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.01. creating threads](./../../06.multithreading/01.threads/01.threads.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.03. moving a thread](./../../06.multithreading/01.threads/03.move-thread.md)

</div>
