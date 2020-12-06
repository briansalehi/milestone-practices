# 06.01.05 sleep_until function

```cxx
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

typedef std::chrono::high_resolution_clock hclock;

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    cout_mtx.lock();
    std::cout << "running thread " << thread_id << std::endl;
    cout_mtx.unlock();

    std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    struct std::tm * ptm = std::localtime(&tt);
    ++ptm->tm_sec;
    std::this_thread::sleep_until(std::chrono::system_clock::from_time_t(mktime(ptm)));
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
running thread 139961970931456
running thread 139961962538752
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.04. sleeping thread](./../../06.multithreading/01.threads/04.sleeping-thread.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.06. high resolution clock](./../../06.multithreading/01.threads/06.high-resolution-clock.md)

</div>
