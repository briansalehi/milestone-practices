#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mutex;
std::chrono::milliseconds interval(50);
unsigned int shared_lock = 0;
unsigned int exclusive_lock = 0;

void worker() {
    std::this_thread::sleep_for(interval);
    while (true) {
        if (mutex.try_lock()) {
            std::cout << "shared lock try " << shared_lock << std::endl;
            mutex.unlock();
            return;
        }
        else {
            ++exclusive_lock;
            std::cout << "exclusive lock try " << exclusive_lock << std::endl;
            std::this_thread::sleep_for(interval);
        }
    }
}

void counter() {
    mutex.lock();
    std::this_thread::sleep_for(10*interval);
    ++shared_lock;
    mutex.unlock();
}

int main() {
    std::thread t1(worker);
    std::thread t2(counter);

    t1.join();
    t2.join();
    return 0;
}
