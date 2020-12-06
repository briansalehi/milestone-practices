#include <iostream>
#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size(500, 400), 0, cv::Scalar(255,255,255));
    std::string text = "this string will be printed on image";
    cv::putText(
        image, // image to be drawn on
        text, // text to draw
        cv::Point2i(10, 30), // center, top left corner of text box
        cv::FONT_HERSHEY_PLAIN, // font style
        1.3, // font size (multiplied by)
        cv::Scalar(0,0,0), // color in BGR form
        1, // thickness
        8, // correctedness
        false
    );

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0, 0);
    cv::imshow("preview", image);
    while (true) if (cv::waitKey(0) == 27) break;
    cv::destroyWindow("preview");
    return 0;
}
