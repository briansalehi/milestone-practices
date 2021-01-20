#include <iostream>
#include <thread>
#include <future>

std::thread::id worker() {
    std::thread::id thread_id = std::this_thread::get_id();
    return thread_id;
}

int main()
{
    std::future<std::thread::id> f1 = std::async(worker);
    std::future<std::thread::id> f2 = std::async(worker);
    std::thread::id id1 = f1.get();
    std::thread::id id2 = f2.get();
    std::cout << "thread 1: " << id1 << std::endl;
    std::cout << "thread 2: " << id2 << std::endl;
    return 0;
}
