# 03.02.01 cv::circle

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("../../samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to load image" << std::endl;
        return 1;
    }

    cv::circle(image, cv::Point(image.cols/2,image.rows/3), 110, cv::Scalar(255.0f,255.0f,255.0f));

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0, 0);
    cv::imshow("preview", image);
    while (true) {
        if (cv::waitKey(0) == 27) {
            break;
        }
    }

    cv::destroyWindow("preview");
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 195">Comments</span>

```cxx
void cv::circle(
    cv::Mat&            img,
    cv::Point           center,
    int                 radius,
    const cv::Scalar&   color,
    int                 thikness = 1,
    int                 lineType = 8,
    int                 shift = 0
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02. Drawing and Annotating](./../../03.operations/02.drawing/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.02. cv::clipLine](./../../03.operations/02.drawing/02.clipline.md)

</div>
