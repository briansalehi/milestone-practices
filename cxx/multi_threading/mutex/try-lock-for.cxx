#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void worker() {
    if (mutex.try_lock()) {
        std::cout << "thread id: " << std::this_thread::get_id() << std::endl;
    }
    else {
        std::cout << "thread id: " << std::this_thread::get_id() << std::endl;
    }
    mutex.unlock();
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();
    return 0;
}
