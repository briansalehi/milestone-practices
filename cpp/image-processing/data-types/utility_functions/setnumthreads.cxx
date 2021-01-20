#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::setNumThreads(1);
    std::cout << cv::getNumThreads() << std::endl;
    return 0;
}
