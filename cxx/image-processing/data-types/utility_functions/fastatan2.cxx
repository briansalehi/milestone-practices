#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    float degrees = cv::fastAtan2(45.0, 45.0);
    std::cout << degrees << std::endl;
    return 0;
}
