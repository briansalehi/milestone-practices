#include <iostream>
#include <thread>
#include <mutex>

// global mutual extension variable
std::mutex cout_mtx;

void worker() {
    cout_mtx.lock();
    std::cout << "starting thread" << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(worker);
    std::thread t3(worker);
    std::thread t4(worker);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
