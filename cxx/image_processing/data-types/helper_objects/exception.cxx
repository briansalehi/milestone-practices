#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    // see cv::Error::Code in ../opencv2/core/base.hpp for more error codes
    CV_Error(cv::Error::StsDivByZero, "this line throws an exception");
    }
    catch (cv::Exception& exp) {
        std::cout << exp.code << ": " << exp.file << " (" << exp.func << ": " << exp.line << "): " << exp.err << std::endl;
    }

    try {
    int line = 1;
    //CV_Error_(cv::Error::StsBadSize, "this line (%d) throws an exception in fprint format string", line);
    }
    catch (cv::Exception& exp) {
        std::cout << exp.code << ": " << exp.file << " (" << exp.func << ": " << exp.line << "): " << exp.err << std::endl;
    }

    CV_Assert(1 == 1);
    CV_DbgAssert( 1 == 1 );

    return 0;
}
