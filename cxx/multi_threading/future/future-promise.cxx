#include <functional>
#include <iostream>
#include <thread>
#include <future>

void worker(std::future<int>& future) {
    int value = future.get();
    std::cout << "thread value: " << value << std::endl;
}

int main()
{
    std::promise<int> promise;
    std::future<int> future = promise.get_future();
    std::thread thread(worker, std::ref(future));
    promise.set_value(1);
    thread.join();
    return 0;
}
