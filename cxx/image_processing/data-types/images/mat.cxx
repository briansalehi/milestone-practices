#include <iostream>
#include <opencv2/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("../../samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to open image file" << std::endl;
        return 1;
    }

    std::cout << image.flags << std::endl;
    std::cout << image.dims << std::endl;

    if (image.dims == 2) {
        std::cout << image.rows << std::endl;
        std::cout << image.cols << std::endl;
    }
    return 0;
}
