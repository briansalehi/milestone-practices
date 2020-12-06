#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Rect rectangle(cv::Point2i(0,0), cv::Point2i(5,5));
    cv::Point2i pt1(1,1);
    cv::Point2i pt2(4,1);
    bool contains_line = cv::clipLine(rectangle, pt1, pt2);
    if (contains_line) {
        std::cout << "rectangle:" << std::endl;
        std::cout << rectangle << std::endl;
        std::cout << "contains the line" << std::endl;
        std::cout << pt1 << std::endl;
        std::cout << pt2 << std::endl;
    }

    return 0;
}
