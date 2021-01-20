#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

typedef std::chrono::high_resolution_clock hclock;

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    cout_mtx.lock();
    std::cout << "running thread " << thread_id << std::endl;
    cout_mtx.unlock();

    std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    struct std::tm * ptm = std::localtime(&tt);
    ++ptm->tm_sec;
    std::this_thread::sleep_until(std::chrono::system_clock::from_time_t(mktime(ptm)));
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();

    return 0;
}
