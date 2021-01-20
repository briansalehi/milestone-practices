# 03.02.10 cv::getTextSize

```cxx
#include <iostream>
#include <string>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    std::string text{"this text will be printed on image"};
    cv::Point2i origin(10, 20);
    int* baseline = nullptr;
    cv::Mat image(cv::Size(400, 500), 0, cv::Scalar(0,0,0));
    cv::Size size = cv::getTextSize(
        text, // text
        //origin, // origin
        cv::FONT_HERSHEY_PLAIN, // font style
        1.3, // font size
        1, // thickness
        baseline
    );

    std::cout << "center: " << origin << std::endl;
    std::cout << "baseline: " << baseline << std::endl;
    std::cout << "size: " << size << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 167">Comments</span>

The **cv::getTextSize()** function evaluates how big some text would be if you were to draw it without actually drawing it on an image.  
*baseLine* is an output parameter which represents the y-coordinate of the text baseline relative to the bottom-most point in the text.

```cxx
cv::getTextSize(
    const std::string& text,
    cv::Point   origin,
    int     fontFace,
    double  fontScale,
    int     thickness,
    int*    baseLine
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.09. cv::putText](./../../03.operations/02.drawing/09.puttext.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.03. Functors](./../../03.operations/03.functors/00.README.md)

</div>
