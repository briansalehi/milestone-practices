#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int64_t count = cv::getCPUTickCount();
    std::cout << count << std::endl;
    return 0;
}
