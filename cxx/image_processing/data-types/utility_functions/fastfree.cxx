#include <opencv2/core/types.hpp>

int main()
{
    int* memory = (int*)cv::fastMalloc(10);
    if (memory != nullptr) {
        cv::fastFree(memory);
    }
    return 0;
}
