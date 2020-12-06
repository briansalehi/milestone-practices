#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);

    cout_mtx.lock();
    std::cout << "thread 1: " << t1.get_id() << std::endl;
    std::cout << "thread 2: " << t2.get_id() << std::endl;
    cout_mtx.unlock();

    std::swap(t1, t2);

    cout_mtx.lock();
    std::cout << "thread 1: " << t1.get_id() << std::endl;
    std::cout << "thread 2: " << t2.get_id() << std::endl;
    cout_mtx.unlock();

    t1.join();
    t2.join();
    return 0;
}
