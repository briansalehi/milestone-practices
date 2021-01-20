#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::setUseOptimized(false);
    std::cout << cv::useOptimized() << std::endl;
    
    cv::setUseOptimized(true);
    std::cout << cv::useOptimized() << std::endl;
    return 0;
}
