# 06.03.01 std::future - std::async

```cxx
#include <iostream>
#include <thread>
#include <future>

std::thread::id worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    return thread_id;
}

int main()
{
    std::future<std::thread::id> f1 = std::async(worker);
    std::future<std::thread::id> f2 = std::async(worker);
    std::thread::id id1 = f1.get();
    std::thread::id id2 = f2.get();
    std::cout << "thread 1: " << id1 << std::endl;
    std::cout << "thread 2: " << id2 << std::endl;
    return 0;
}

```

## Output

```txt
thread 1: 140378550810368
thread 2: 140378542417664
```

## <span title="References: Mastering C++ Multithreading - pages 101 and 102">Comments</span>

The code asynchronously calls a function, passing it a parameter.
Once the future finishes, it obtains the resulting value and stores it in a variable.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.03. Future and Promise](./../../06.multithreading/03.future/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.03.02. std::future - std::promise](./../../06.multithreading/03.future/02.future-promise.md)

</div>
