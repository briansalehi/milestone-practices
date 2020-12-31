#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    double frequency = cv::getTickFrequency();
    std::cout << frequency << std::endl;
    return 0;
}
