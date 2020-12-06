# 06.01.03 moving a thread

```cxx
#include <iostream>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    cout_mtx.lock();
    std::cout << "running thread " << thread_id << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(std::move(t1));

    t2.join();
    return 0;
}

```

## Output

```txt
running thread 140183972353792
```

## Comments *[not verified]*

You can move one thread to another using **std::move()**. notice that we didn't wait for *t1* to join anymore,
that's because by using **move semantics** we do not copy an instance of an object but we move it to another block of memory,
so in here, *t1* no longer exists after we move it to *t2*.  
We will only have one thread here because we created *t1* and moved it to *t2*.

Also notice how we used **std::this_thread::get_id()** function in *worker* function, to get the id of calling thread which has the type **std::thread::id**.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.02. passing parameters to threads](./../../06.multithreading/01.threads/02.parameters.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.01.04. sleeping thread](./../../06.multithreading/01.threads/04.sleeping-thread.md)

</div>
