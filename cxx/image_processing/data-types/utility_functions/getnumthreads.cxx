#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int count = cv::getNumThreads();
    std::cout << count << std::endl;
    return 0;
}
