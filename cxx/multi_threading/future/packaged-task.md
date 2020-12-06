# 06.03.03 std::packaged_task

```cxx
#include <iostream>
#include <thread>
#include <future>
#include <chrono>

int worker(const int ms) {
    std::chrono::milliseconds delay(ms);
    std::this_thread::sleep_for(delay);
    return ms;
}

int main()
{
    std::packaged_task<int(const int)> task(worker);
    std::future<int> future = task.get_future();
    std::thread thread(std::move(task), 100);
    int delay = future.get();
    std::cout << "thread suspended for " << delay << " milliseconds" << std::endl;
    thread.join();
    return 0;
}

```

## Output

```txt
thread suspended for 100 milliseconds
```

## <span title="References: Mastering C++ Multithreading - page 104">Comments</span>

**std::packaged_task** is a wrapper for any callable target.
It allows for asynchronous execution with the result available in a **std::future** object.
It is similar to **std::function**, except that it transfers its results to a **std::future** object.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.03.02. std::future - std::promise](./../../06.multithreading/03.future/02.future-promise.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [07. Debugging &lpar;incomplete&rpar;](./../../07.debugging/README.md)

</div>
