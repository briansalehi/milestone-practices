# 04.01.08 cv::VideoCapture::get&lpar;&rpar; and cv::VideoCapture::set&lpar;&rpar;

```cxx
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

```

## <span title="References: Learning OpenCV 3 - pages 194 through 196&#13;&#09;&#09;&nbsp;">Comments</span>

The **cv::VideoCapture::get()** and **cv::VideoCapture::set()** functions allow us
to perform reading from and writing to video meta-data.

```cxx
double cv::VideoCapture::get(
	int propidq// property identifier
);

bool cv::VideoCapture::set(
	int propid,	// property identifier 
	double value	// value to which to set the property
);

Video capture properties used by **cv::VideoCapture::get()** and
**cv::VideoCapture::set()**

```cxx
cv::CAP_PROP_POS_MSEC		// current position in video file (ms) or video capture timestamp
cv::CAP_PROP_POS_FRAMES		// zero-based index of next frame
cv::CAP_PROP_POS_AVI_RATIO	// relative position in the video (range is 0.0 to 1.0)
cv::CAP_PROP_FRAME_WIDTH	// width of frames in the video
cv::CAP_PROP_FRAME_HEIGHT	// height of frames in the video
cv::CAP_PROP_FPS		// frame rate at which the video was recorded
cv::CAP_PROP_FOURCC		// four character code indicating codec
cv::CAP_PROP_FRAME_COUNT	// total number of frames in a video file
cv::CAP_PROP_FORMAT		// format of the Mat objects returned (e.g., CV_8UC3)
cv::CAP_PROP_MODE		// indicates capture mode; value are specific to video backend being used (e.g., DC1394)
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.07. cv::VideoCapture::grab&lpar;&rpar; and cv::VideoCapture::retrieve&lpar;&rpar;](./../../04.functions/01.data_files/07.grab-retrieve.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.09. cv::VideoWriter](./../../04.functions/01.data_files/09.video-writer.md)

</div>
