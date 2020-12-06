#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int main()
{
    const char* filename = "sample.jpg";

    cv::Mat image = cv::imread(filename, -1);
    if (image.empty()) {
        std::cerr << "Incorrect input file" << std::endl;
		return 1;
    }
    cv::namedWindow("image viewer", cv::WINDOW_NORMAL);
    cv::resizeWindow("image viewer", 720, 480);
    cv::imshow("image viewer", image);
    cv::waitKey(0);
    cv::destroyWindow("image viewer");

    return 0;
}
