#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::Mat mat = cv::Mat::eye(3, 3, CV_32FC1);
    std::cout << mat << std::endl;
    std::cout << "\n(2,2): " << mat.at<float>(2,2) << std::endl;
    return 0;
}
