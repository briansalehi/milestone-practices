#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("./samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to load image" << std::endl;
        return 1;
    }

    cv::line(
        image, // image to be drawn on
        cv::Point2i(100,100), // first endpoint of line
        cv::Point2i(200,100), // second endpoint of line
        cv::Scalar(0,0,0), // color in BGR
        2, // line correctedness
        0 // shift
    );

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0,0);
    cv::imshow("preview", image);
    while (true) {
        if (cv::waitKey(0) == 27) {
            break;
        }
    }

    cv::destroyWindow("preview");
    return 0;
}
