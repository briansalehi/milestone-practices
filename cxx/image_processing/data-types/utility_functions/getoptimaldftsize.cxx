#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int size = cv::getOptimalDFTSize(10);
    std::cout << size << std::endl;
    return 0;
}
