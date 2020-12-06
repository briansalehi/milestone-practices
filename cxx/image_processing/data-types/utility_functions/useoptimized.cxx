#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    std::cout << std::boolalpha << cv::useOptimized() << std::endl;
    return 0;
}
