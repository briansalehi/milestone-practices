#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video;
	video.open("./samples/video.mp4");
	if (!video.isOpened()) {
		std::cerr << "failed to open video file" << std::endl;
		return 1;
	} else {
		return 0;
	}
}
