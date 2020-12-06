#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // value constructor
    cv::Size size(2,4);

    // default constructor
    cv::Size sizeA(1,1);

    // copy constructor
    cv::Size sizeB(sizeA);

    // member access
    std::cout << size.width << " x " << size.height << std::endl;

    // member function area()
    std::cout << size.area() << std::endl;

    return 0;
}
