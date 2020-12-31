#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // default constructor
    cv::Point2d point;

    // two dimensional point having type of int
    cv::Point2i A(1,1);

    // copy constructor
    cv::Point3i B(A);

    // member access
    std::cout << "point position: (" << B.x << "," << B.y << "," << B.z << ")" << std::endl;
    
    // dot product
    cv::Point2i C(1,1);
    float d = A.dot(C);
    double dd = A.ddot(C);
    std::cout << "int type distance from point A to B: " << d << std::endl;
    std::cout << "double type distance from point A to B: " << dd << std::endl;

    return 0;
}
