#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image = cv::imread("./samples/snowflake.jpg", cv::IMREAD_UNCHANGED);
	if (image.empty()) {
		std::cerr << "failed to load image" << std::endl;
		return 1;
	}

	const std::string filename = "image.png";
	const std::vector<int> parameters{cv::IMWRITE_PNG_COMPRESSION, 9}; // parameter sequence for png compression
	cv::imwrite(
		filename, // image filename
		image, // image to be stored
		parameters // parameters array
	);

	return 0;
}
