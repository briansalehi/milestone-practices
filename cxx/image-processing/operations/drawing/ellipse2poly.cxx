#include <iostream>
#include <vector>
#include <algorithm>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Point2i center(0, 0);
    cv::Size axes(100, 100);
    double angle = 0;
    double startAngle = 0;
    double endAngle = 90;
    int delta = 1;
    std::vector<cv::Point2i> pollygon;

    cv::ellipse2Poly(
        center,
        axes,
        angle,
        startAngle,
        endAngle,
        delta,
        pollygon
    );

    std::for_each(pollygon.cbegin(), pollygon.cend(), [](const cv::Point2i& element) {
        std::cout << element << " ";
    });
    std::cout << std::endl;

    return 0;
}
