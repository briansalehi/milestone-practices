# 06.01.07 detach threads

```cxx
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    cout_mtx.lock();
    std::cout << "thread " << thread_id << " sleep cycle 1" << std::endl;
    cout_mtx.unlock();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout_mtx.lock();
    std::cout << "thread " << thread_id << " sleep cycle 2" << std::endl;
    cout_mtx.unlock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    t1.detach();
    t2.detach();
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Threads can be detached from the main thread, meaning they will keep running even after the calling thread exits.  
Should this program give any output? no! threads are detached from the main thread and they will no longer have access to the standard output of the running terminal, but they will write those strings in some buffer somewhere. The thing is they do their job detached.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.06. high resolution clock](./../../06.multithreading/01.threads/06.high-resolution-clock.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.08. swapping threads](./../../06.multithreading/01.threads/08.swap.md)

</div>
