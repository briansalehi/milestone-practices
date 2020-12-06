#include <iostream>
#include <vector>
#include <algorithm>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image = cv::imread("../../samples/snowflake.jpg");
    if (image.empty()) {
        std::cerr << "failed to open image" << std::endl;
        return 1;
    }

    std::vector<cv::Point2i> polygon;

    cv::ellipse2Poly(
        cv::Point2i(100, 50), // center
        cv::Size2i(100, 50), // axes
        0, // angel
        0, // start angel
        360, // end angel
        10, // delta
        polygon
    );

    cv::Point2i pts[polygon.size()] = {};
    int npts = 0;
    for_each(polygon.cbegin(), polygon.cend(), [&pts, &npts](const cv::Point2i& point) {
        pts[npts] = point;
        ++npts;
    });

    cv::fillConvexPoly(
        image, // image to draw on
        pts, // array of C-style points
        npts, // size of pts elements
        cv::Scalar(255,255,255), // color scalar
        8, // line type 4 or 8
        0 //shift
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
