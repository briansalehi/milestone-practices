#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size2i(500,500), 0, cv::Scalar(255,255,255));
    cv::LineIterator line(
        image, // image to be drawn on
        cv::Point2i(100,250), // first endpoint of line
        cv::Point2i(400,250), // last endpoint of line
        4, // correctedness
        false // left to right
    );
    std::cout << "pixels in line: " << line.count << std::endl;
    return 0;
}
