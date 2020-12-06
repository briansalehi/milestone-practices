#include <iostream>
#include <string>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    std::string text{"this text will be printed on image"};
    cv::Point2i origin(10, 20);
    int* baseline = nullptr;
    cv::Mat image(cv::Size(400, 500), 0, cv::Scalar(0,0,0));
    cv::Size size = cv::getTextSize(
        text, // text
        //origin, // origin
        cv::FONT_HERSHEY_PLAIN, // font style
        1.3, // font size
        1, // thickness
        baseline
    );

    std::cout << "center: " << origin << std::endl;
    std::cout << "baseline: " << baseline << std::endl;
    std::cout << "size: " << size << std::endl;
    return 0;
}
