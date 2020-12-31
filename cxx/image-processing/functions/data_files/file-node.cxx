#include <iostream>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::FileStorage storage("./samples/storage.yml", cv::FileStorage::READ);
	if (!storage.isOpened()) {
		std::cerr << "failed to load storage" << std::endl;
		return 1;
	}

	// grab integer with type checking
	if (storage["fps"].type() == cv::FileNode::INT) {
		int fps = storage["fps"];
		std::cout << "fps: " << fps << std::endl;
	}

	// grab an object
	cv::Size resolution;
	storage["resolution"] >> resolution;
	std::cout << "resolution: " << resolution << std::endl;

	// grab a map
	cv::FileNode dimensions = storage["dimensions"];
	int x = (int)dimensions["x"];
	int y = (int)dimensions["y"];
	std::cout << "x: " << x << ", y: " << y << std::endl;

	// grab a sequence
	std::vector<int> sequence;
	cv::FileNode frames = storage["frames"];
	cv::FileNodeIterator iterator;
	for (iterator = frames.begin(); iterator != frames.end(); ++iterator)
		sequence.push_back((int)(*iterator));
	std::cout << "frames: ";
	for_each(sequence.begin(), sequence.end(), [](const int frame) {
		std::cout << frame << ", ";
	});
	std::cout << std::endl;

	storage.release();
	return 0;
}
