#include <iostream>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void worker(unsigned int thread_id) {
    cout_mtx.lock();
    std::cout << "starting thread " << thread_id << std::endl;
    cout_mtx.unlock();
}

int main()
{
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    std::thread t3(worker, 3);
    std::thread t4(worker, 4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
