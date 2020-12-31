#include <opencv2/core/types.hpp>

int main()
{
    /**
    int type: should be assigned by cv::TermCriteria::COUNT == cv::TermCriteria::MAX_ITER or cv::TermCriteria::EPS
    int maxCount
    double epsilon
    to read more about this function read ../opencv2/core/types.hpp
    */
    cv::TermCriteria criteria(cv::TermCriteria::COUNT | cv::TermCriteria::EPS, 5, 1);

    return 0;
}
