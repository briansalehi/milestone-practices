# 04.01.01 cv::imread

```cxx
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image = cv::imread("./samples/snowflake.jpg", cv::IMREAD_UNCHANGED);
	if (image.empty()) {
		std::cerr << "failed to load image" << std::endl;
		return 1;
	} else {
		std::cout << "image loaded" << std::endl;
		return 0;
	}
}

```

## <span title="References: Learning OpenCV 3 - pages 185 and 186&#13;&#09;&#09;&nbsp;">Comments</span>

**cv::imread()** function reads an image file from the filesystem.

```cxx
cv::Mat cv::imread(
	const std::string& filename,	// input filename
	int flags = cv::IMREAD_COLOR	//flags set how to interpret file
);
```

Flags accepted by **cv::imread()** :

```cxx
cv::IMREAD_COLOR	// always load to three-channel array
cv::IMREAD_GRAYSCALE	// always load to single-channel array
cv::IMREAD_ANYCOLOR	// channels as indicated by file (up to three)
cv::IMREAD_ANYDEPTH	// allow loading of more than 8-bit depth
cv::IMREAD_UNCHANGED	// equivalent to combining cv::IMREAD_ANYCOLOR | cv::IMREAD_ANYDEPTH
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01. Data Files](./../../04.functions/01.data_files/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.02. cv::imwrite](./../../04.functions/01.data_files/02.imwrite.md)

</div>
