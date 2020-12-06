#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size2i(500,500), 0, cv::Scalar(255,255,255));

    cv::rectangle(
        image, // image to be drawn on
        cv::Point2i(150,200), // first corner of rectangle
        cv::Point2i(350,300), // opposite corner of rectangle
        cv::Scalar(0,0,0), // color in BGR form
        2, // correctedness
        0 // shift
    );

    /* alternative
    cv::rectangle(
        image, // image to be drawn on
        cv::Rect(cv::Point2i(150,200), cv::Point2i(350,300)); // rectangle to draw
        cv::Scalar(0,0,0), // color in BGR form
        2, // correctedness
        0 // shift
    );
    */
    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0,0);
    cv::imshow("preview", image);
    while (true) if (cv::waitKey(0) == 27) break;
    cv::destroyWindow("preview");
    return 0;
}
