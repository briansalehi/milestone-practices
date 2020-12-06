#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::VideoCapture capture;
    capture.open("input.mp4");
    if (!capture.isOpened()) {
        std::cerr << "failed to open video file" << std::endl;
        return 1;
    }

    cv::namedWindow("capture", cv::WINDOW_NORMAL);
    cv::resizeWindow("capture", 800, 600);
    cv::namedWindow("polar", cv::WINDOW_NORMAL);
    cv::resizeWindow("polar", 800, 600);
    cv::moveWindow("polar", 600, 300);

    double fps = capture.get(cv::CAP_PROP_FPS); // frame per second
    int width = capture.get(cv::CAP_PROP_FRAME_WIDTH); // frame width
    int height = capture.get(cv::CAP_PROP_FRAME_HEIGHT); // frame height
    cv::Size size(width, height); // frame size

    cv::VideoWriter writer;
    int fourcc = writer.fourcc('M','J','P','G'); // codec
    writer.open("output.avi", fourcc, fps, size);

    cv::Mat bgr_frame, polar_frame;
    while (true) {
        capture >> bgr_frame;
        if (bgr_frame.empty()) {
            std::cerr << "ran out of frames" << std::endl;
            return 2;
        }

        cv::imshow("capture", bgr_frame);
        cv::logPolar(bgr_frame, polar_frame, cv::Point2f(bgr_frame.cols/2, bgr_frame.rows/2), 40, cv::WARP_FILL_OUTLIERS);

        cv::imshow("polar", polar_frame);
        writer << polar_frame;

        if (cv::waitKey(10) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 3;
        }
    }

    cv::destroyWindow("polar");
    cv::destroyWindow("capture");
    return 0;
}
