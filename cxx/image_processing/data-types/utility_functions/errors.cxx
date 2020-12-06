#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    CV_Error(cv::Error::StsBadSize, "exception thrown as a sample");
    }
    catch (cv::Exception& exp) {
        std::cout << "error code " << exp.line << ": " << exp.err << std::endl;
    }

    try {
    int i;
    //CV_Error_(cv::Error::StsBadSize, "formated string exception %d");
    }
    catch (cv::Exception& exp) {
        std::cout << "error code " << exp.line << ": " << exp.err << std::endl;
    }

    return 0;
}
