#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <string>

int main()
{
    cv::VideoCapture video;
    video.open("sample.mp4");
    cv::namedWindow("video viewer", 0);
    cv::resizeWindow("video viewer", 720, 480);

    cv::Mat frame;
    while (true) {
        video >> frame;
        if (frame.empty()) {
            std::cerr << "ran out of frames" << std::endl;
            break;
        }

        cv::imshow("video viewer", frame);
        if (cv::waitKey(33) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 1;
        }
    }

    return 0;
}
