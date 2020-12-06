#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 800, height = 600;
    cv::Mat image;
    image = cv::imread("sample.jpg", -1);
    if (image.empty()) {
        std::cerr << "attempted to load an empty image" << std::endl;
        return 1;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::Mat downsampled;
    cv::pyrDown(image, downsampled);
    cv::pyrDown(downsampled, downsampled);

    cv::namedWindow("x4 downsampled image", cv::WINDOW_NORMAL);
    cv::resizeWindow("x4 downsampled image", width, height);
    cv::moveWindow("x4 downsampled image", 600, 200);
    cv::imshow("x4 downsampled image", downsampled);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("raw image");
    cv::destroyWindow("x4 downsampled image");
    return 0;
}
