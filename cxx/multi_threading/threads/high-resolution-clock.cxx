#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

typedef std::chrono::high_resolution_clock hclock;

std::mutex cout_mtx;

void worker() {
    std::thread::id thread_id = std::this_thread::get_id();

    std::chrono::time_point<hclock> begin = hclock::now();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::chrono::time_point<hclock> end = hclock::now();

    std::chrono::duration<double, std::milli> elapsed = end - begin;

    cout_mtx.lock();
    std::cout << "elapsed time for thread " << thread_id << ": " << elapsed.count() << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();

    return 0;
}
