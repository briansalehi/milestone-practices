#include <opencv2/opencv.hpp>

int main()
{
    int width = 800, height = 600;
    cv::Mat image;
    image = cv::imread("sample.jpg", -1);
    if (image.empty()) {
        std::cerr << "image file did not load" << std::endl;
        return 2;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::Mat filtered;
    cv::GaussianBlur(image, filtered, cv::Size(5,5), 3, 3);
    cv::GaussianBlur(filtered, filtered, cv::Size(5,5), 3, 3);

    cv::namedWindow("filtered image", cv::WINDOW_NORMAL);
    cv::resizeWindow("filtered image", width, height);
    cv::moveWindow("filtered image", 600, 200);
    cv::imshow("filtered image", filtered);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("filtered image");
    cv::destroyWindow("raw image");
    return 0;
}
