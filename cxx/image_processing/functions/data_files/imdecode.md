# 04.01.04 cv::imdecode

```cxx
#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat compressed(cv::Size2i(400,400), 0, cv::Scalar(255,255,255));
	std::string filename = "sample.png";
	std::vector<uchar> buffer;
	std::vector<int> parameters = {cv::IMWRITE_PNG_COMPRESSION, 9};
	cv::imencode(filename, compressed, buffer, parameters); // compression
	cv::Mat image = cv::imdecode(buffer, cv::IMREAD_GRAYSCALE); // decompression
	return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 189&#13;&#09;&#09;&nbsp;">Comments</span>

**cv::imdecode()** decompresses the image data and returns the results in
cv::Mat;

```cxx
cv::Mat cv::imdecode(
	cv::InputArra buf,	// encoded file bytes are here
	int	flags = cv::IMREAD_COLOR	// flags set how to interpret file
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.03. cv::imencode](./../../04.functions/01.data_files/03.imencode.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.05. cv::VideoCapture](./../../04.functions/01.data_files/05.video-capture.md)

</div>
