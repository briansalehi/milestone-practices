#include <opencv2/core/types.hpp>

int main()
{
    CV_Assert(1 == 1);
    CV_DbgAssert(1 == 1);
    return 0;
}
