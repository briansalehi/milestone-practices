#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    float cuberoot = cv::cubeRoot(27);
    std::cout << cuberoot << std::endl;
    return 0;
}
