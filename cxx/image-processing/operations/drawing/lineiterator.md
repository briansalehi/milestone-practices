# 03.02.08 cv::LineIterator

```cxx
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size2i(500,500), 0, cv::Scalar(255,255,255));
    cv::LineIterator line(
        image, // image to be drawn on
        cv::Point2i(100,250), // first endpoint of line
        cv::Point2i(400,250), // last endpoint of line
        4, // correctedness
        false // left to right
    );
    std::cout << "pixels in line: " << line.count << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 164">Comments</span>

The **cv::LineIterator object is an iterator that is used to get each pixel of a raster line in sequence.  
The line iterator is our first example of a functor (function object) in OpenCV.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.07. cv::rectangle](./../../03.operations/02.drawing/07.rectangle.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.09. cv::putText](./../../03.operations/02.drawing/09.puttext.md)

</div>
