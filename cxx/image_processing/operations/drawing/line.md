# 03.02.06 cv::line

```cxx
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("./samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to load image" << std::endl;
        return 1;
    }

    cv::line(
        image, // image to be drawn on
        cv::Point2i(100,100), // first endpoint of line
        cv::Point2i(200,100), // second endpoint of line
        cv::Scalar(0,0,0), // color in BGR
        2, // line correctedness
        0 // shift
    );

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0,0);
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

## <span title="References: Learning OpenCV 3 - page 163">Comments</span>

The function **cv::line()** draws a straight line from pt1 to pt2 in the image img.

```cxx
cv::line(
    cv::Mat&    img,
    cv::Point   pt1,
    cv::Point   pt2,
    const cv::Scalar&   color,
    int lineType = 8,
    int shift = 0
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.05. cv::fillConvexPoly](./../../03.operations/02.drawing/05.fillconvexpoly.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.07. cv::rectangle](./../../03.operations/02.drawing/07.rectangle.md)

</div>
