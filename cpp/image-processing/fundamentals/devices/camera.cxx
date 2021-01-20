#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::VideoCapture capture;
    capture.open(0);
    if (!capture.isOpened()) {
        std::cerr << "failed to get input stream from camera" << std::endl;
        return 1;
    }

    cv::namedWindow("capture", cv::WINDOW_NORMAL);
    cv::resizeWindow("capture", 800, 600);

    cv::Mat frame;
    while (true) {
        capture >> frame;
        if (frame.empty()) {
            std::cerr << "hit empty frame" << std::endl;
            return 2;
        }

        cv::imshow("capture", frame);
        if (cv::waitKey(10) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 3;
        }
    }

    cv::destroyWindow("capture");
    return 0;
}
