# 04.01.03 cv::imencode

```cxx
#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image(cv::Size2i(400,400), 0, cv::Scalar(255,255,255));
	std::string jpgfile = "sample.jpg";
	std::string pngfile = "sample.png";
	std::vector<uchar> buffer;
	std::vector<int> parameters = {cv::IMWRITE_PNG_COMPRESSION, 9};
	cv::imwrite(jpgfile, image);
	cv::imencode(pngfile, image, buffer, parameters);
	cv::imwrite(pngfile, image, parameters);
	return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 188 and 189&#13;&#09;&#09;&nbsp;">Comments</span>

**cv::imencode()** compresses an image into supported file formats specified in
file extension.

```cxx
void cv::imencode(
	const string&	ext,	// extension specified codec
	cv::InputArray	img,	// image to be encoded
	std::vector<uchar>&	buf,	// encoded file bytes go here
	const std::vector<int>&	params = std::vector<int>()	// (optional) for parametrized formats
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.02. cv::imwrite](./../../04.functions/01.data_files/02.imwrite.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.04. cv::imdecode](./../../04.functions/01.data_files/04.imdecode.md)

</div>
