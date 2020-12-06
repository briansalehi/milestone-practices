#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image(cv::Size2i(400,400), 0, cv::Scalar(255,255,255));
	std::string jpgfile = "sample.jpg";
	std::string pngfile = "sample.png";
	std::vector<uchar> buffer;
	std::vector<int> parameters = {cv::IMWRITE_PNG_COMPRESSION, 9};
	cv::imwrite(jpgfile, image);
	cv::imencode(pngfile, image, buffer, parameters);
	cv::imwrite(pngfile, image, parameters);
	return 0;
}
