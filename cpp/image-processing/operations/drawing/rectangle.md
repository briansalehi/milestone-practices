# 03.02.07 cv::rectangle

```cxx
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size2i(500,500), 0, cv::Scalar(255,255,255));

    cv::rectangle(
        image, // image to be drawn on
        cv::Point2i(150,200), // first corner of rectangle
        cv::Point2i(350,300), // opposite corner of rectangle
        cv::Scalar(0,0,0), // color in BGR form
        2, // correctedness
        0 // shift
    );

    /* alternative
    cv::rectangle(
        image, // image to be drawn on
        cv::Rect(cv::Point2i(150,200), cv::Point2i(350,300)); // rectangle to draw
        cv::Scalar(0,0,0), // color in BGR form
        2, // correctedness
        0 // shift
    );
    */
    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0,0);
    cv::imshow("preview", image);
    while (true) if (cv::waitKey(0) == 27) break;
    cv::destroyWindow("preview");
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 163">Comments</span>

The **cv::rectangle()** function draws a rectangle with corners pt1 to pt2 in the image img. An alternative form of this function allow the rectangle's location and size to be specific by a single **cv::Rect** argument r.

```cxx
void rectangle(
    cv::Mat&    img, // Image to be drawn on
    cv::Point   pt1, // First corner of rectangle
    cv::Point   pt2. // Opposite corner of rectangle
    const cv::Scalar&   color, // Color, BGR form
    int lineType = 8, // Correctness, 4 or 8
    int shift = 0 // Bits of radius to treat as fraction
);

void rectangle(
    cv::Mat&    img, // Image to be drawn on
    cv::Rect    r, // Rectangle to draw
    const cv::Scalar&   color, // Color, BGR form
    int lineType = 8, // Correctness, 4 or 8
    int shift = 0 // Bits of radius to treat as fraction
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.06. cv::line](./../../03.operations/02.drawing/06.line.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.08. cv::LineIterator](./../../03.operations/02.drawing/08.lineiterator.md)

</div>
