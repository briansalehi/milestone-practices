#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 600, height = 400;
    cv::Mat image, gray, canny;

    image = cv::imread("sample2.jpg");
    if (image.empty()) {
        std::cerr << "cannot load empty image" << std::endl;
        return 1;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::namedWindow("gray image", cv::WINDOW_NORMAL);
    cv::resizeWindow("gray image", width, height);
    cv::moveWindow("gray image", 606, 0);
    cv::imshow("gray image", gray);

    cv::Canny(gray, canny, 10, 100, 3, true);
    cv::namedWindow("canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("canny image", width, height);
    cv::moveWindow("canny image", 303, 350);
    cv::imshow("canny image", canny);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("raw image");
    cv::destroyWindow("gray image");
    cv::destroyWindow("canny image");
    return 0;
}
