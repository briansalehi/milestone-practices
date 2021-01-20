# 06.03.02 std::future - std::promise

```cxx
#include <functional>
#include <iostream>
#include <thread>
#include <future>

void worker(std::future<int>& future) {
    int value = future.get();
    std::cout << "thread value: " << value << std::endl;
}

int main()
{
    std::promise<int> promise;
    std::future<int> future = promise.get_future();
    std::thread thread(worker, std::ref(future));
    promise.set_value(1);
    thread.join();
    return 0;
}

```

## Output

```txt
thread value: 1
```

## <span title="References: Mastering C++ Multithreading - pages 102 and 103">Comments</span>

**std::promise** allows transferring data between threads.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.03.01. std::future - std::async](./../../06.multithreading/03.future/01.future-async.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.03.03. std::packaged_task](./../../06.multithreading/03.future/03.packaged-task.md)

</div>
