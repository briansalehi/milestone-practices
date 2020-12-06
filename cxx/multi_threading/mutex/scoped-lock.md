# 06.02.06 std::scoped_lock

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    std::lock_guard<std::mutex> lock(mutex);
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
thread id: 140132379006720
thread id: 140132370614016
```

## Comments *[not verified]*

**this practice needs to be fixed**  

First introduced in the 2017 standard, the scoped lock is a mutex wrapper which obtains access to (locks) the provided mutex,
and ensures it is unlocked when the scoped lock goes out of scope.
It differs from a lock guard in that it is a wrapper for not one, but multiple mutexes.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.05. std::unique_lock](./../../06.multithreading/02.mutex/05.unique-lock.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.07. recursive_mutex](./../../06.multithreading/02.mutex/07.recursive-mutex.md)

</div>
