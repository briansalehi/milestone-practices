# 06.01.06 high resolution clock

```cxx
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

typedef std::chrono::high_resolution_clock hclock;

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    std::chrono::time_point<hclock> begin = hclock::now();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::chrono::time_point<hclock> end = hclock::now();

    std::chrono::duration<double, std::milli> elapsed = end - begin;

    cout_mtx.lock();
    std::cout << "elapsed time for thread " << thread_id << ": " << elapsed.count() << std::endl;
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
elapsed time for thread 140620648896256: 1000.12
elapsed time for thread 140620657288960: 1000.12
```

## Comments *[not verified]*

There's a way to count time during execution of program and that's using high resolution clock in **std::chrono**.  
Here we captured time value before and after **sleep_for()** function and then evaluated the elapsed time during sleeping of threads.  
To get the time difference we used **std::chrono::duration** template class initiated by **<double, std::milli>** which specifies that we need the elapsed time in milli seconds.  
Notice that to get the value of milli seconds you need to call the **count()** function on *elapsed* object.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.05. sleep_until function](./../../06.multithreading/01.threads/05.sleep-until.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.07. detach threads](./../../06.multithreading/01.threads/07.detach.md)

</div>
