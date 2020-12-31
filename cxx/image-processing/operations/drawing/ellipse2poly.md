# 03.02.04 cv::ellipse2Poly

```cxx
#include <iostream>
#include <vector>
#include <algorithm>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Point2i center(0, 0);
    cv::Size axes(100, 100);
    double angle = 0;
    double startAngle = 0;
    double endAngle = 90;
    int delta = 1;
    std::vector<cv::Point2i> pollygon;

    cv::ellipse2Poly(
        center,
        axes,
        angle,
        startAngle,
        endAngle,
        delta,
        pollygon
    );

    std::for_each(pollygon.cbegin(), pollygon.cend(), [](const cv::Point2i& element) {
        std::cout << element << " ";
    });
    std::cout << std::endl;

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 161">Comments</span>

The **cv::llpise2Poly()** function is used internally by **cv::ellipse()** to compute elliptical arcs,
but you can call it yourself as well.

Parameter delta specifies the angle between subsequent points you want to sample.
The computed points are returned in the **std::vector<> pts**.

**NOTE: Always use \#include <vector> header when using std::vector, altough, OpenCV headers seem to have included it already.**

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.03. cv::ellipse](./../../03.operations/02.drawing/03.ellipse.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.05. cv::fillConvexPoly](./../../03.operations/02.drawing/05.fillconvexpoly.md)

</div>
