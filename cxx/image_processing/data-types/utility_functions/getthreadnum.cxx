#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int thread_id = cv::getThreadNum();
    std::cout << thread_id << std::endl;
    return 0;
}
