# 06.02.05 std::unique_lock

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    std::unique_lock<std::mutex> lock(mutex);
    std::cout << "thread id: " << thread_id << std::endl;
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
thread id: 140718757271296
thread id: 140718748878592
```

## Comments *[not verified]*

The unique lock is a general-purpose mutex wrapper. It's similar to the timed mutex, but with additional features, primary of which is the concept of ownership.
Unlike other lock types, a unique lock does not necessarily own the mutex it wraps if it contains any at all.  
Mutexes can be transferred between unique lock instances along with ownership of the said mutexes using **swap()** function.

Types example:

```cxx
std::mutex m1, m2, m3;

std::unique_lock<std::mutex> lock1(m1, std::defer_lock);
std::unique_lock<std::mutex> lock2(m2, std::try_lock);
std::unique_lock<std::mutex> lock3(m3, std::adopt_lock);
```

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.04. std::lock_guard](./../../06.multithreading/02.mutex/04.lock-guard.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.06. std::scoped_lock](./../../06.multithreading/02.mutex/06.scoped-lock.md)

</div>
