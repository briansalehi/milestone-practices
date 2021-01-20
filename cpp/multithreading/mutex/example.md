# 06.02.01 mutex example

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    // standard output is not thread-safe and needs to be locked
    cout_mtx.lock();
    std::cout << "thread id: " << thread_id << std::endl;
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
thread id: 140116606748416
thread id: 140116598355712
```

## Comments *[not verified]*

You have seen these lines dozen times in previous chapters of multi-threading.  
What you need to know is that some operations like writing to output stream is not thread-safe, either in C or C++ style.  
To make a thread write in *stdout* or any other streams, output source needs to be locked for the writing thread to prevent simultaneous write operations of other threads.  
By not doing this lock actually the program will not crash but the output string will be a jumble.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02. Mutex](./../../06.multithreading/02.mutex/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.02. try_lock](./../../06.multithreading/02.mutex/02.try-lock.md)

</div>
