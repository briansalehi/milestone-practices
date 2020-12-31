#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("../../samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to load image" << std::endl;
        return 1;
    }

    cv::circle(image, cv::Point(image.cols/2,image.rows/3), 110, cv::Scalar(255.0f,255.0f,255.0f));

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0, 0);
    cv::imshow("preview", image);
    while (true) {
        if (cv::waitKey(0) == 27) {
            break;
        }
    }

    cv::destroyWindow("preview");
    return 0;
}
