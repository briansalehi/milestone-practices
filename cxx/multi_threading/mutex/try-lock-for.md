# 06.02.03 try_lock_for

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void worker() {
    if (mutex.try_lock()) {
        std::cout << "thread id: " << std::this_thread::get_id() << std::endl;
    }
    else {
        std::cout << "thread id: " << std::this_thread::get_id() << std::endl;
    }
    mutex.unlock();
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();
    return 0;
}

```

## Output

```txt
thread id: 140076381030144
thread id: 140076372637440
```

## Comments *[not verified]*

**try_lock_for** is a way to tell a thread that wait for only a period of time and stop waiting afterward because more than that will be meaningless.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.02. try_lock](./../../06.multithreading/02.mutex/02.try-lock.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.04. std::lock_guard](./../../06.multithreading/02.mutex/04.lock-guard.md)

</div>
