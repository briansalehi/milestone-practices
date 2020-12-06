#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat compressed(cv::Size2i(400,400), 0, cv::Scalar(255,255,255));
	std::string filename = "sample.png";
	std::vector<uchar> buffer;
	std::vector<int> parameters = {cv::IMWRITE_PNG_COMPRESSION, 9};
	cv::imencode(filename, compressed, buffer, parameters); // compression
	cv::Mat image = cv::imdecode(buffer, cv::IMREAD_GRAYSCALE); // decompression
	return 0;
}
