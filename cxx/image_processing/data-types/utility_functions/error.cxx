#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    cv::error(cv::Exception(100, "exception thrown for fun", "cv::error()", __FILE__, __LINE__));
    }
    catch (cv::Exception& exp) {
        std::cout << exp.err << std::endl;
    }
    return 0;
}
