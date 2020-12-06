# 04.01.02 cv::imwrite

```cxx
#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image = cv::imread("./samples/snowflake.jpg", cv::IMREAD_UNCHANGED);
	if (image.empty()) {
		std::cerr << "failed to load image" << std::endl;
		return 1;
	}

	const std::string filename = "image.png";
	const std::vector<int> parameters{cv::IMWRITE_PNG_COMPRESSION, 9}; // parameter sequence for png compression
	cv::imwrite(
		filename, // image filename
		image, // image to be stored
		parameters // parameters array
	);

	return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 187&#13;&#09;&#09;&nbsp;">Comments</span>

**cv::imwrite()**, writes an image array into a file with sowe compression
methods available on your system.  
First arguments gets the filename with following supported extensions in OpenCV:

* .jpg or .jpeg: baseline JPEG; 8-bit; one- or three-channel input
* .jp2: JPEG 2000; 8-bit or 16-bit; one- or three-channel input
* .tif or .tiffL TIFF; 8-bit or 16-bit; one-, three- or four-channel input
* .png: PNG; 8-bit or 16-bit; one-, three- or four-channel input
* .bpm: BPM; 8-bit; one-, three- or four-channel input
* .ppm, .pgm: NetPBM; 8-bit; one-channel (PGM) or three-channel (PPM)

The second argument is the image to be stored.

The third argument is used for parameters that are accepted by the particular
file type being used for the write operation.
The *params* argument expects an STL vector of integers, with those integers
being a sequence of parameter IDs followed by the value to be assigned to that
parameter (i.e., alternating between the parameter ID and the parameter value).

Parameters accepted by **cv::imwrite()**:

```cxx
cv::IMWRITE_JPG_QUALITY		// range: 0-100, default: 95
cv::IMWRITE_PNG_COMPRESSION	// range: 0-9, default: 3
cv::IMWRITE_PXM_BINARY		// range: 0 or 1, default: 1
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.01. cv::imread](./../../04.functions/01.data_files/01.imread.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.03. cv::imencode](./../../04.functions/01.data_files/03.imencode.md)

</div>
