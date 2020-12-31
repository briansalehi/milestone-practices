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
