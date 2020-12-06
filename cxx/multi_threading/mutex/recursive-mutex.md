# 06.02.07 recursive_mutex

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    mutex.lock();
    std::cout << "thread id: " << thread_id << std::endl;
    mutex.unlock();
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
thread id: 139873024780032
thread id: 139873016387328
```

## Comments *[not verified]*

**this practice needs to be fixed**

The recursive mutex is another subtype of the mutex. Even though it has exactly the same function as a regular mutex, it allows the calling thread, which is initially locked the mutex, to lock the same mutex repeatedly. By doing this, the mutex doesn't become available for other threads until the owning thread has unlocked the mutex as many times as it has locked it.

One good reason to use a recursive mutex is for example when using recursive functions.

A potential complication hereby is that the maximum number of times that a recursive mutex can be locked is not defined in the standard. When the implementation's limit has been reached, a **std::system_error** will be thrown if one tries to lock it, or false is returned when using the non-blocking **try_lock** function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.06. std::scoped_lock](./../../06.multithreading/02.mutex/06.scoped-lock.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.03. Future and Promise](./../../06.multithreading/03.future/README.md)

</div>
