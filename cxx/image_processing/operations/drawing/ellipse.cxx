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

    // overload I
    cv::Point2i center(image.cols/2, image.rows/3);
    cv::Size axes(120, 60);
    double angle = 45;
    double startAngle = 0;
    double endAngle = 180;
    const cv::Scalar color(255.0f, 255.0f, 255.0f);
    int thickness = 1;
    int lineType = 8;
    int shift = 0;

    cv::ellipse(image, center, axes, angle, startAngle, endAngle, color, thickness, lineType, shift);

    // overload II
    const cv::RotatedRect box(center, cv::Size(200,100), angle);
    cv::ellipse(image, box, color, thickness, lineType);

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0, 0);
    cv::imshow("preview", image);

    while (true) {
        if (cv::waitKey(0) == 27) break;
    }
    cv::destroyWindow("preview");
    return 0;
}
