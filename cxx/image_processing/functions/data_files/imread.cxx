#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image = cv::imread("./samples/snowflake.jpg", cv::IMREAD_UNCHANGED);
	if (image.empty()) {
		std::cerr << "failed to load image" << std::endl;
		return 1;
	} else {
		std::cout << "image loaded" << std::endl;
		return 0;
	}
}
