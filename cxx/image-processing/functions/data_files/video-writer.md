# 04.01.09 cv::VideoWriter

```cxx
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

```

## <span title="References: Learning OpenCV 3 - pages 196 and 197&#13;&#09;&#09;&nbsp;">Comments</span>

Just as we did with the **cv::VideoCapture** device for reading, we must first
create a **cv::VideoWriter** device before we can write out our video.

This video writer, have two constructors; one is a simple default constructor
that just creates an uninitialized video object that we will have to open later,
and the other has all of the arguments necessary to actually set up the writer.

```cxx
cv::VideoWriter::VideoWriter(
	const std::string& filename.	// output filename
	int fourcc,	// codec, use CV_FOURCC() macro
	double fps,	// frame rate
	cv::Size frame_size,	// size of individual images
	bool is_color	// whether pass color or gray
);
```

Once you have verified that video writer is ready to write, you can write frames
by simply passing your array to the writer:

```cxx
cv::VideoWriter::write(
	const cv::Mat& image);'
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.08. cv::VideoCapture::get&lpar;&rpar; and cv::VideoCapture::set&lpar;&rpar;](./../../04.functions/01.data_files/08.get-set.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.10. cv::FileStorage](./../../04.functions/01.data_files/10.file-storage.md)

</div>
