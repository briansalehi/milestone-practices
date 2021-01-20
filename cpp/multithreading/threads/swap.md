# 06.01.08 swapping threads

```cxx
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    cout_mtx.lock();
    std::cout << "thread 1: " << t1.get_id() << std::endl;
    std::cout << "thread 2: " << t2.get_id() << std::endl;
    cout_mtx.unlock();

    std::swap(t1, t2);

    cout_mtx.lock();
    std::cout << "thread 1: " << t1.get_id() << std::endl;
    std::cout << "thread 2: " << t2.get_id() << std::endl;
    cout_mtx.unlock();

    t1.join();
    t2.join();
    return 0;
}

```

## Output

```txt
thread 1: 139752606992128
thread 2: 139752598599424
thread 1: 139752598599424
thread 2: 139752606992128
```

## Comments *[not verified]*

We can take advantage of **std::swap()** function in standard library and swap two thread objects.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.07. detach threads](./../../06.multithreading/01.threads/07.detach.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02. Mutex](./../../06.multithreading/02.mutex/README.md)

</div>
