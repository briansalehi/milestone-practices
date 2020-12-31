#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video("./samples/video.mp4");
	if (!video.isOpened()) {
		std::cerr << "failed to load video source" << std::endl;
		return 1;
	}

	// WRITE to file storage
	cv::FileStorage storage("sample.yml", cv::FileStorage::WRITE);
	if (!storage.isOpened()) {
		std::cerr << "failed to load storage" << std::endl;
		return 2;
	}

	int frame_width = video.get(cv::CAP_PROP_FRAME_WIDTH);
	int frame_height = video.get(cv::CAP_PROP_FRAME_HEIGHT);
	unsigned fourcc = video.get(cv::CAP_PROP_FOURCC);
	char codec[] = {(char)fourcc, (char)(fourcc >> 8), (char)(fourcc >> 16), (char)(fourcc >> 24), '\0'};
	storage << "file name" << "video.mp4";
	storage << "codec" << codec;
	storage << "dimensions" << "{";
	storage << "x" << frame_width;
	storage << "y" << frame_height;
	storage << "}";
	storage << "resolution" << cv::Size2i(frame_width, frame_height);
	storage << "fps" << (int)(video.get(cv::CAP_PROP_FPS) + 0.5);
	storage << "frames count" << video.get(cv::CAP_PROP_FRAME_COUNT);
	storage << "frames" << "[:";

	cv::Mat frame;
	while (video.read(frame))
		storage << video.get(cv::CAP_PROP_POS_FRAMES);

	storage << "]";
	storage.release();

	return 0;
}
