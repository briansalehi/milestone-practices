#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 800, height = 600;
    cv::Mat image, gray, pyramid, canny1, canny2;

    image = cv::imread("sample2.jpg");
    if (image.empty()) {
        std::cerr << "cannot load empty image" << std::endl;
        return 1;
    }

    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::pyrDown(gray, pyramid);
    cv::pyrDown(pyramid, pyramid);

    cv::Canny(gray, canny1, 10, 100, 3, true);
    cv::namedWindow("gray to canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("gray to canny image", width, height);
    cv::imshow("gray to canny image", canny1);

    cv::Canny(pyramid, canny2, 10, 100, 3, true);
    cv::namedWindow("pyramid to canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("pyramid to canny image", width, height);
    cv::moveWindow("pyramid to canny image", 600, 200);
    cv::imshow("pyramid to canny image", canny2);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("gray to canny image");
    cv::destroyWindow("pyramid to canny image");
    return 0;
}
