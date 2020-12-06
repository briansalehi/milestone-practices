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
