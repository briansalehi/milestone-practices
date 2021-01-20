#include <iostream>
#include <string>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video(cv::CAP_V4L2);
	if (!video.isOpened()) {
		std::cerr << "failed to load video source" << std::endl;
		return 1;
	}

	std::string filename = "sample.mp4";
	int fourcc = video.get(cv::CAP_PROP_FOURCC);
	double fps = video.get(cv::CAP_PROP_FPS);
	int frame_width = video.get(cv::CAP_PROP_FRAME_WIDTH);
	int frame_height = video.get(cv::CAP_PROP_FRAME_HEIGHT);
	cv::Size resolution(frame_width, frame_height);
	bool color = true;

	cv::VideoWriter writer(filename, fourcc, fps, resolution, color);
	if (!writer.isOpened()) {
		std::cerr << "failed to load writer source" << std::endl;
		return 2;
	}

	cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
	cv::moveWindow("preview", 0, 0);

	cv::Mat frame;
	while (video.read(frame)) {
		cv::imshow("preview", frame);
		writer.write(frame);
		// writer << frame; // output operator also works
		if (cv::waitKey(1) == 27) break;
	}

	cv::destroyWindow("preview");
	return 0;
}
