#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video("./samples/video.mp4");
	if (!video.isOpened()) {
		std::cerr << "failed to load video source" << std::endl;
		return 1;
	}

	std::cout << "frame index: " << video.get(cv::CAP_PROP_POS_FRAMES) << std::endl;
	std::cout << "ratio: " << video.get(cv::CAP_PROP_POS_AVI_RATIO) << std::endl;
	std::cout << "frame width: " << video.get(cv::CAP_PROP_FRAME_WIDTH) << std::endl;
	std::cout << "frame height: " << video.get(cv::CAP_PROP_FRAME_HEIGHT) << std::endl;
	std::cout << "total frames: " << video.get(cv::CAP_PROP_FRAME_COUNT) << std::endl;
	std::cout << "frame per second speed: " << video.get(cv::CAP_PROP_FPS) << std::endl;
	unsigned fourcc = video.get(cv::CAP_PROP_FOURCC);
	char code[] = {(char)fourcc, (char)(fourcc >> 8), (char)(fourcc >> 16), (char)(fourcc >> 24), '\0'};
	std::cout << "fourcc: " << code << std::endl;
	return 0;
}
