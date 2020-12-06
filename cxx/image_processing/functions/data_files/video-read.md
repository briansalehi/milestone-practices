# 04.01.06 cv::VideoCapture::read&lpar;&rpar;

```cxx
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

```

## <span title="References: Learning OpenCV 3 - page 192&#13;&#09;&#09;&nbsp;">Comments</span>

After we have a **cv::VideoCapture** object ready to be used, we can start
reading frames by calling **cv::VideoCapture::read()** function.
If the read was not successful, then it returns false.

```cxx
bool cv::VideoCapture::read(
	cv::OutputArray image	// image into which to read data
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.05. cv::VideoCapture](./../../04.functions/01.data_files/05.video-capture.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.07. cv::VideoCapture::grab&lpar;&rpar; and cv::VideoCapture::retrieve&lpar;&rpar;](./../../04.functions/01.data_files/07.grab-retrieve.md)

</div>
