# 06.01.04 sleeping thread

```cxx
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    cout_mtx.lock();
    std::cout << "running thread " << thread_id << std::endl;
    cout_mtx.unlock();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout_mtx.lock();
    std::cout << "closing thread " << thread_id << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();

    return 0;
}

```

## Output

```txt
running thread 140712539473664
running thread 140712531080960
closing thread 140712539473664
closing thread 140712531080960
```

## Comments *[not verified]*

We used **chrono** header file to access to time functions.  
There's only one extra line in this program which needs to be explained.  
**std::this_thread::sleep_for()** function gets a time object of type **std::chrono::seconds()** which specifies acurate 1 second duration to the system.  
This way we made all threads to sleep for 1 second. We need timing for future use.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.03. moving a thread](./../../06.multithreading/01.threads/03.move-thread.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.05. sleep_until function](./../../06.multithreading/01.threads/05.sleep-until.md)

</div>
