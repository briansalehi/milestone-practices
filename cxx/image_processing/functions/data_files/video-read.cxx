#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video(cv::CAP_V4L2);
	if (!video.isOpened()) {
		std::cerr << "failed to load video source" << std::endl;
		return 1;
	}
	cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
	cv::moveWindow("preview", 0, 0);
	cv::Mat frame;
	while (video.read(frame)) {
		/*
		video >> frame; // input stream can also be used instead
		if (frame.empty()) break; // but needs to verify frame
		*/
		cv::imshow("preview", frame);
		if (cv::waitKey(1) == 27) break;
	}
	cv::destroyWindow("preview");
	return 0;
}
