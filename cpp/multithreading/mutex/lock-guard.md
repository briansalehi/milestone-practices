# 06.02.04 std::lock_guard

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
thread id: 140676913874688
thread id: 140676905481984
```

## Comments *[not verified]*

**std::lock_guard** is a simple mutex wrapper, which handles the obtaining of a lock on the *mutex* object it gets as parameter, as well as its release when the lock guard goes out of scope.  
This is a helpful mechanism to ensure that one does not forget to release a mutex lock, and to help reduce clutter in one's code when one has to release the same mutex in multiple locations.  
With the lock guard, however, we do not have to worry about such details, which allows us to focus on the business logic instead of worrying about mutex management.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.02.03. try_lock_for](./../../06.multithreading/02.mutex/03.try-lock-for.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.05. std::unique_lock](./../../06.multithreading/02.mutex/05.unique-lock.md)

</div>
