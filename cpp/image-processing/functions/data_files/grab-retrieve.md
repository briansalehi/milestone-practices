# 04.01.07 cv::VideoCapture::grab&lpar;&rpar; and cv::VideoCapture::retrieve&lpar;&rpar;

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

```

## <span title="References: Learning OpenCV 3 - pages 193 and 194&#13;&#09;&#09;&nbsp;">Comments</span>

**BUGGY**: needs to be fixed, cv::VideoCapture::retrieve() won't retrieve next
frame as loop iterates.

The **cv::VideoCapture::grab()** function copies the currently available image
to an internal buffer that is invisible to the user.

```cxx
bool cv::VideoCapture::grab();
```

As was the case with **cv::VideoCapture::read()**, **cv::VideoCapture::grab()**
returns true only if the grab was successful.

**cv::VideoCapture::retrieve()** functions analogously to
**cv::VideoCapture::read()** except that it operates from the internal buffer to
which **cv::VideoCapture::grab()** copies frames.

```cxx
bool cv::VideoCapture::retrieve(
	cv::OutputArray image,	// image into which to read data
	int channel = 0	// used for multihead devices like Kinect and Videre
);
```

Another difference is the additional argument **channel**. The channel argument
is used when the device being accessed natively has multiple heads.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.06. cv::VideoCapture::read&lpar;&rpar;](./../../04.functions/01.data_files/06.video-read.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.08. cv::VideoCapture::get&lpar;&rpar; and cv::VideoCapture::set&lpar;&rpar;](./../../04.functions/01.data_files/08.get-set.md)

</div>
