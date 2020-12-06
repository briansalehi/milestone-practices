#include <iostream>
#include <opencv2/core/core.hpp>

/*
template<> inline void cv::Ptr<int>::delete_obj() {
    if (obj != nullptr) {
        delete obj;
    }
}
*/

int main()
{
    // constructor
    cv::Ptr<cv::Mat> frameA(new cv::Mat);
    cv::Ptr<cv::Mat> frameB = cv::makePtr<cv::Mat>();

    // overriden void delete_obj() method
    //cv::Ptr<int> pointer(new int);

    return 0;
}
