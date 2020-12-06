#include <iostream>
#include <thread>
#include <future>
#include <chrono>

int worker(const int ms) {
    std::chrono::milliseconds delay(ms);
    std::this_thread::sleep_for(delay);
    return ms;
}

int main()
{
    std::packaged_task<int(const int)> task(worker);
    std::future<int> future = task.get_future();
    std::thread thread(std::move(task), 100);
    int delay = future.get();
    std::cout << "thread suspended for " << delay << " milliseconds" << std::endl;
    thread.join();
    return 0;
}
