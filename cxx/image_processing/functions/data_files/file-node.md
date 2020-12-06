# 04.01.11 cv::FileNode

```cxx
#include <iostream>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::FileStorage storage("./samples/storage.yml", cv::FileStorage::READ);
	if (!storage.isOpened()) {
		std::cerr << "failed to load storage" << std::endl;
		return 1;
	}

	// grab integer with type checking
	if (storage["fps"].type() == cv::FileNode::INT) {
		int fps = storage["fps"];
		std::cout << "fps: " << fps << std::endl;
	}

	// grab an object
	cv::Size resolution;
	storage["resolution"] >> resolution;
	std::cout << "resolution: " << resolution << std::endl;

	// grab a map
	cv::FileNode dimensions = storage["dimensions"];
	int x = (int)dimensions["x"];
	int y = (int)dimensions["y"];
	std::cout << "x: " << x << ", y: " << y << std::endl;

	// grab a sequence
	std::vector<int> sequence;
	cv::FileNode frames = storage["frames"];
	cv::FileNodeIterator iterator;
	for (iterator = frames.begin(); iterator != frames.end(); ++iterator)
		sequence.push_back((int)(*iterator));
	std::cout << "frames: ";
	for_each(sequence.begin(), sequence.end(), [](const int frame) {
		std::cout << frame << ", ";
	});
	std::cout << std::endl;

	storage.release();
	return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 201 through 204&#13;&#09;&#09;&nbsp;">Comments</span>

Member functions of a **cv::FileNode**

```cxx
cv::FileNode fn
cv::FileNode fn1(fn0);
cv::FileNode(fs, node);
fn[(std::string)key];
fn[(const char*)key];
fn[(int)id];
fn.type();
fn.empty();
fn.isNone();
fn.isSeq();
fn.isMap();
fn.isInt();
fn.isReal();
fn.isSrting();
fn.name();
size_t sz = fn.size();
(int)fn;
(float)fn;
(double)fn;
(std::string)fn;
```

Possible return values for **cv::FileNode::type()**

```cxx
cv::FileNode::NODE = 0
cv::FileNode::INT = 1
cv::FileNode::REAL = 2
cv::FileNode::FLOAT = 2
cv::FileNode::STR = 3
cv::FileNode::STRING = 3
cv::FileNode::REF = 4
cv::FileNode::SEQ = 5
cv::FileNode::MAP = 6
cv::FileNode::FLOW = 8
cv::FileNode::USER = 16
cv::FileNode::EMPTY = 32
cv::FileNode::NAMED = 64
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [04.01.10. cv::FileStorage](./../../04.functions/01.data_files/10.file-storage.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [04.02. Windows](./../../04.functions/02.windows/00.README.md)

</div>
