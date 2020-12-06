# 04.01.10 cv::FileStorage

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

	// WRITE to file storage
	cv::FileStorage storage("sample.yml", cv::FileStorage::WRITE);
	if (!storage.isOpened()) {
		std::cerr << "failed to load storage" << std::endl;
		return 2;
	}

	int frame_width = video.get(cv::CAP_PROP_FRAME_WIDTH);
	int frame_height = video.get(cv::CAP_PROP_FRAME_HEIGHT);
	unsigned fourcc = video.get(cv::CAP_PROP_FOURCC);
	char codec[] = {(char)fourcc, (char)(fourcc >> 8), (char)(fourcc >> 16), (char)(fourcc >> 24), '\0'};
	storage << "file name" << "video.mp4";
	storage << "codec" << codec;
	storage << "dimensions" << "{";
	storage << "x" << frame_width;
	storage << "y" << frame_height;
	storage << "}";
	storage << "resolution" << cv::Size2i(frame_width, frame_height);
	storage << "fps" << (int)(video.get(cv::CAP_PROP_FPS) + 0.5);
	storage << "frames count" << video.get(cv::CAP_PROP_FRAME_COUNT);
	storage << "frames" << "[:";

	cv::Mat frame;
	while (video.read(frame))
		storage << video.get(cv::CAP_PROP_POS_FRAMES);

	storage << "]";
	storage.release();

	return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 198 through 201&#13;&#09;&#09;&nbsp;">Comments</span>

The **cv::FileStorage** object is a representation of an XML or YAML data file.
You can create it and pass a filename to the constructor, or you can just create
an unopened storage object with the default constructor and open the file later
with **cv::FileStorage::open()**, where the flag argument should be either
**cv::FileStorage::WRITE** or **cv::FileStorage::APPEND**.

```cxx
cv::FileStorage::FileStorage();
cv::FileStorage::FileStorage(std::string filename, int flags);
```

If you would like to create a new mapping or sequence you can do so with the
special characters { (for a mapping) or [ (for a sequence). To create a single
line mapping or sequence use \"{:\" and \"[:\" characters.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.09. cv::VideoWriter](./../../04.functions/01.data_files/09.video-writer.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.01.11. cv::FileNode](./../../04.functions/01.data_files/11.file-node.md)

</div>
