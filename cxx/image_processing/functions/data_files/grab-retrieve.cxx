#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video("./samples/video.mp4");
	if (!video.isOpened()) {
		std::cerr << "failed to load video source" << std::endl;
		return 1;
	}

	if (!video.grab()) {
		std::cerr << "failed to grab frames" << std::endl;
		return 2;
	}
	cv::Mat frame;
	cv::namedWindow("preview", cv::WINDOW_NORMAL);
	cv::moveWindow("preview", 0, 0);
	cv::resizeWindow("preview", 800, 600);

	while (video.retrieve(frame)) {
		cv::imshow("preview", frame);
		if (cv::waitKey(1) == 27) break;
	}

	cv::destroyWindow("preview");
	return 0;
}
