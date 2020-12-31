#include <iostream>
#include <opencv2/core/core.hpp>

/*
    There is a not axis-aligned rectangle called cv::RotatedRect.
    This rectangle contains following members:
    center with type cv::Point2f
    size with type cv::Size2f
    angle with type float
*/

void show(const cv::RotatedRect& rectangle) {
    std::cout << "center of rectangle: " << rectangle.center << std::endl;
    std::cout << "size of rectangle: " << rectangle.size << std::endl;
    std::cout << "angle of rectangle: " << rectangle.angle << std::endl;
    std::cout << std::endl;
}

int main()
{
    // default constructor
    cv::RotatedRect rectangle;

    // member access
    rectangle.center = cv::Point(0,0);
    rectangle.size = cv::Size(1,1);
    show(rectangle);

    // copy constructor
    cv::RotatedRect copy(rectangle);
    show(copy);

    // construction using corners
    cv::RotatedRect rectA(cv::Point(0,0), cv::Point(0,2), cv::Point(4,2));
    rectA.angle = 90;
    show(rectA);

    // construction using center, size, theta
    cv::RotatedRect rectB(cv::Point(0,0), cv::Size(2,2), 90);
    show(rectB);

    return 0;
}
