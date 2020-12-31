# 04.01.05 cv::VideoCapture

```cxx
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::VideoCapture video;
	video.open("./samples/video.mp4");
	if (!video.isOpened()) {
		std::cerr << "failed to open video file" << std::endl;
		return 1;
	} else {
		return 0;
	}
}

```

## <span title="References: Learning OpenCV 3 - pages 190 through 192&#13;&#09;&#09;&nbsp;">Comments</span>

**cv::VideoCapture** object contains the information needed for reading frames
from a camera or video file.

```cxx
cv::VideoCapture::VideoCapture(
	const std::string& filename
);

cv::VideoCapture::VideoCapture(
	int device
);

cv::VideoCapture::VideoCapture();
```

If the open is successful and we are able to start reading frames, the member
function **cv::VideoCapture::isOpened()** will return true.

Camera domain indicating where HighGUI should look for your camera.
```cxx
cv::CAP_ANY	// 0
cv::CAP_MIL	// 100
cv::CAP_VFW	// 200
cv::CAP_V4L	// 200
cv::CAP_V4L2	// 200
cv::CAP_FIREWIRE	// 300
cv::CAP_IEEE1394	// 300
cv::CAP_DC1394	// 300
cv::CAP_CMU1394	// 300
cv::CAP_QT	// 500
cv::CAP_DSHOW	// 700
cv::CAP_PVAPI	// 800
cv::CAP_OPENNI	// 900
cv::CAP_ANDROID	// 1000
```

You can pass -1 to **cv::VideoCapture::VideoCapture()**, which will cause OpenCV
to open a window that allows you to select the desired camera.

In case you create the **cv::VideoCapture** object without providing any
information about what is to be opened, you should explicitely open the source
you want to read from before you can use the object.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.04. cv::imdecode](./../../04.functions/01.data_files/04.imdecode.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.06. cv::VideoCapture::read&lpar;&rpar;](./../../04.functions/01.data_files/06.video-read.md)

</div>
