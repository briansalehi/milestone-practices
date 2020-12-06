# 06.02.02 try_lock

```cxx
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mutex;
std::chrono::milliseconds interval(50);
unsigned int shared_lock = 0;
unsigned int exclusive_lock = 0;

void worker() {
    std::this_thread::sleep_for(interval);
    while (true) {
        if (mutex.try_lock()) {
            std::cout << "shared lock try " << shared_lock << std::endl;
            mutex.unlock();
            return;
        }
        else {
            ++exclusive_lock;
            std::cout << "exclusive lock try " << exclusive_lock << std::endl;
            std::this_thread::sleep_for(interval);
        }
    }
}

void counter() {
    mutex.lock();
    std::this_thread::sleep_for(10*interval);
    ++shared_lock;
    mutex.unlock();
}

int main() {
    std::thread t1(worker);
    std::thread t2(counter);

    t1.join();
    t2.join();
    return 0;
}

```

## Output

```txt
exclusive lock try 1
exclusive lock try 2
exclusive lock try 3
exclusive lock try 4
exclusive lock try 5
exclusive lock try 6
exclusive lock try 7
exclusive lock try 8
exclusive lock try 9
shared lock try 1
```

## Comments *[not verified]*

Mutexes can also be used in the **non-blocking locking** approach.  
To do so, we use **try_lock** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.01. mutex example](./../../06.multithreading/02.mutex/01.example.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.03. try_lock_for](./../../06.multithreading/02.mutex/03.try-lock-for.md)

</div>
